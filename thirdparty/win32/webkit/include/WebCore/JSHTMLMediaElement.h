/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSHTMLMediaElement_h
#define JSHTMLMediaElement_h


#if ENABLE(VIDEO)

#include "JSHTMLElement.h"

namespace WebCore {

class HTMLMediaElement;

class JSHTMLMediaElement : public JSHTMLElement {
    typedef JSHTMLElement Base;
public:
    JSHTMLMediaElement(PassRefPtr<JSC::Structure>, PassRefPtr<HTMLMediaElement>);
    static JSC::JSObject* createPrototype(JSC::ExecState*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue*, JSC::PutPropertySlot&);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue* prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType));
    }

    static JSC::JSValue* getConstructor(JSC::ExecState*);
};


class JSHTMLMediaElementPrototype : public JSC::JSObject {
public:
    static JSC::JSObject* self(JSC::ExecState*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue* prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType));
    }
    JSHTMLMediaElementPrototype(PassRefPtr<JSC::Structure> structure) : JSC::JSObject(structure) { }
};

// Functions

JSC::JSValue* jsHTMLMediaElementPrototypeFunctionLoad(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsHTMLMediaElementPrototypeFunctionPlay(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsHTMLMediaElementPrototypeFunctionPause(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
// Attributes

JSC::JSValue* jsHTMLMediaElementError(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue* jsHTMLMediaElementSrc(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLMediaElementSrc(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*);
JSC::JSValue* jsHTMLMediaElementCurrentSrc(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue* jsHTMLMediaElementNetworkState(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue* jsHTMLMediaElementBufferingRate(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue* jsHTMLMediaElementBuffered(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue* jsHTMLMediaElementReadyState(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue* jsHTMLMediaElementSeeking(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue* jsHTMLMediaElementCurrentTime(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLMediaElementCurrentTime(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*);
JSC::JSValue* jsHTMLMediaElementDuration(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue* jsHTMLMediaElementPaused(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue* jsHTMLMediaElementDefaultPlaybackRate(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLMediaElementDefaultPlaybackRate(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*);
JSC::JSValue* jsHTMLMediaElementPlaybackRate(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLMediaElementPlaybackRate(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*);
JSC::JSValue* jsHTMLMediaElementPlayed(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue* jsHTMLMediaElementSeekable(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue* jsHTMLMediaElementEnded(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue* jsHTMLMediaElementAutoplay(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLMediaElementAutoplay(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*);
JSC::JSValue* jsHTMLMediaElementStart(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLMediaElementStart(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*);
JSC::JSValue* jsHTMLMediaElementEnd(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLMediaElementEnd(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*);
JSC::JSValue* jsHTMLMediaElementLoopStart(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLMediaElementLoopStart(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*);
JSC::JSValue* jsHTMLMediaElementLoopEnd(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLMediaElementLoopEnd(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*);
JSC::JSValue* jsHTMLMediaElementPlayCount(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLMediaElementPlayCount(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*);
JSC::JSValue* jsHTMLMediaElementCurrentLoop(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLMediaElementCurrentLoop(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*);
JSC::JSValue* jsHTMLMediaElementControls(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLMediaElementControls(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*);
JSC::JSValue* jsHTMLMediaElementVolume(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLMediaElementVolume(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*);
JSC::JSValue* jsHTMLMediaElementMuted(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLMediaElementMuted(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*);
JSC::JSValue* jsHTMLMediaElementConstructor(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
// Constants

JSC::JSValue* jsHTMLMediaElementEMPTY(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue* jsHTMLMediaElementLOADING(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue* jsHTMLMediaElementLOADED_METADATA(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue* jsHTMLMediaElementLOADED_FIRST_FRAME(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue* jsHTMLMediaElementLOADED(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue* jsHTMLMediaElementDATA_UNAVAILABLE(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue* jsHTMLMediaElementCAN_SHOW_CURRENT_FRAME(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue* jsHTMLMediaElementCAN_PLAY(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue* jsHTMLMediaElementCAN_PLAY_THROUGH(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);

} // namespace WebCore

#endif // ENABLE(VIDEO)

#endif
