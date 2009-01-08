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

#ifndef JSHTMLAppletElement_h
#define JSHTMLAppletElement_h

#include "JSHTMLElement.h"
#include <runtime/CallData.h>

namespace WebCore {

class HTMLAppletElement;

class JSHTMLAppletElement : public JSHTMLElement {
    typedef JSHTMLElement Base;
public:
    JSHTMLAppletElement(PassRefPtr<JSC::Structure>, PassRefPtr<HTMLAppletElement>);
    static JSC::JSObject* createPrototype(JSC::ExecState*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    bool customGetOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue*, JSC::PutPropertySlot&);
    bool customPut(JSC::ExecState*, const JSC::Identifier&, JSC::JSValue*, JSC::PutPropertySlot&);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue* prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType));
    }

    virtual JSC::CallType getCallData(JSC::CallData&);

    static JSC::JSValue* getConstructor(JSC::ExecState*);
private:
    static bool canGetItemsForName(JSC::ExecState*, HTMLAppletElement*, const JSC::Identifier&);
    static JSC::JSValue* nameGetter(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
};


class JSHTMLAppletElementPrototype : public JSC::JSObject {
public:
    static JSC::JSObject* self(JSC::ExecState*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    JSHTMLAppletElementPrototype(PassRefPtr<JSC::Structure> structure) : JSC::JSObject(structure) { }
};

// Attributes

JSC::JSValue* jsHTMLAppletElementAlign(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAppletElementAlign(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*);
JSC::JSValue* jsHTMLAppletElementAlt(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAppletElementAlt(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*);
JSC::JSValue* jsHTMLAppletElementArchive(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAppletElementArchive(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*);
JSC::JSValue* jsHTMLAppletElementCode(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAppletElementCode(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*);
JSC::JSValue* jsHTMLAppletElementCodeBase(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAppletElementCodeBase(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*);
JSC::JSValue* jsHTMLAppletElementHeight(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAppletElementHeight(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*);
JSC::JSValue* jsHTMLAppletElementHspace(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAppletElementHspace(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*);
JSC::JSValue* jsHTMLAppletElementName(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAppletElementName(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*);
JSC::JSValue* jsHTMLAppletElementObject(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAppletElementObject(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*);
JSC::JSValue* jsHTMLAppletElementVspace(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAppletElementVspace(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*);
JSC::JSValue* jsHTMLAppletElementWidth(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAppletElementWidth(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*);
JSC::JSValue* jsHTMLAppletElementConstructor(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);

} // namespace WebCore

#endif
