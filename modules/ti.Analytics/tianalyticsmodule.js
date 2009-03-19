//
// application analytics module
//
(function()
{
	var url = "http://localhost/~jhaynie/dist/services/app-track";
	var sid = Titanium.Platform.createUUID();
	var appid = Titanium.App.getID();
	
	function send(qsv,async)
	{
		try
		{
			async = (typeof async=='undefined') ? true : async;
			qsv.mid = Titanium.Platform.id;
			qsv.sid = sid;
			qsv.guid = appid;
			var qs = '';
			for (var p in qsv)
			{
				qs+=p+'='+Titanium.Network.encodeURIComponent(String(qsv[p]))+'&';
			}
			// this is asynchronous
			var xhr = Titanium.Network.createHTTPClient();
			xhr.open('POST',url,async);
			xhr.send(qs);
		}
		catch(E)
		{
			Titanium.API.debug("Error sending data: "+E);
		}
	}
	
	Titanium.API.set("Titanium.Analytics.addEvent",function(event,data)
	{
		send({'event':event,'data':data});
	});
	
	Titanium.API.register("ti.UI.stop",function(name)
	{
		send({'event':'ti.event'},false);
	});
	
	Titanium.API.register("ti.UI.window.page.init",function(name,event)
	{
		try
		{
			var user_window = event.window;
			if (user_window.track_registered===true)
			{
				Titanium.API.debug("Already registered track");
				return;
			}
			user_window.track_registered = true;
			if (!Titanium.Platform.id)
			{
				Titanium.API.debug("No machine id found");
				return;
			}
			send({
				'mac_addr': Titanium.Platform.macaddress,
				'os':Titanium.Platform.name,
				'ostype':Titanium.Platform.ostype,
				'osver':Titanium.Platform.version,
				'osarch':Titanium.Platform.architecture,
				'oscpu':Titanium.Platform.processorCount,
				'un':Titanium.Platform.username,
				'ip':Titanium.Platform.address,
				'event':'ti.start'
			});
		}
		catch(e)
		{
			// never never never die in this function
			Titanium.API.error("Error: "+e);
		}
	});	
})();