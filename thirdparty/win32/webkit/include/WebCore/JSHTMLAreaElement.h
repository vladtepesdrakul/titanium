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

#ifndef JSHTMLAreaElement_h
#define JSHTMLAreaElement_h

#include "JSHTMLElement.h"

namespace WebCore {

class HTMLAreaElement;

class JSHTMLAreaElement : public JSHTMLElement {
    typedef JSHTMLElement Base;
public:
    JSHTMLAreaElement(PassRefPtr<JSC::Structure>, PassRefPtr<HTMLAreaElement>);
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


class JSHTMLAreaElementPrototype : public JSC::JSObject {
public:
    static JSC::JSObject* self(JSC::ExecState*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    JSHTMLAreaElementPrototype(PassRefPtr<JSC::Structure> structure) : JSC::JSObject(structure) { }
};

// Attributes

JSC::JSValue* jsHTMLAreaElementAccessKey(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAreaElementAccessKey(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*);
JSC::JSValue* jsHTMLAreaElementAlt(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAreaElementAlt(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*);
JSC::JSValue* jsHTMLAreaElementCoords(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAreaElementCoords(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*);
JSC::JSValue* jsHTMLAreaElementHref(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAreaElementHref(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*);
JSC::JSValue* jsHTMLAreaElementNoHref(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAreaElementNoHref(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*);
JSC::JSValue* jsHTMLAreaElementShape(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAreaElementShape(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*);
JSC::JSValue* jsHTMLAreaElementTarget(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAreaElementTarget(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*);
JSC::JSValue* jsHTMLAreaElementHash(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue* jsHTMLAreaElementHost(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue* jsHTMLAreaElementHostname(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue* jsHTMLAreaElementPathname(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue* jsHTMLAreaElementPort(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue* jsHTMLAreaElementProtocol(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue* jsHTMLAreaElementSearch(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue* jsHTMLAreaElementConstructor(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);

} // namespace WebCore

#endif
