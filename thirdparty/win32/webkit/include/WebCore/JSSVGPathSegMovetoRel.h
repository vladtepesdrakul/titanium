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

#ifndef JSSVGPathSegMovetoRel_h
#define JSSVGPathSegMovetoRel_h


#if ENABLE(SVG)

#include "JSSVGPathSeg.h"

namespace WebCore {

class SVGPathSegMovetoRel;

class JSSVGPathSegMovetoRel : public JSSVGPathSeg {
    typedef JSSVGPathSeg Base;
public:
    JSSVGPathSegMovetoRel(PassRefPtr<JSC::Structure>, PassRefPtr<SVGPathSegMovetoRel>, SVGElement* context);
    static JSC::JSObject* createPrototype(JSC::ExecState*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue*, JSC::PutPropertySlot&);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue* prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType));
    }

};


class JSSVGPathSegMovetoRelPrototype : public JSC::JSObject {
public:
    static JSC::JSObject* self(JSC::ExecState*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    JSSVGPathSegMovetoRelPrototype(PassRefPtr<JSC::Structure> structure) : JSC::JSObject(structure) { }
};

// Attributes

JSC::JSValue* jsSVGPathSegMovetoRelX(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSSVGPathSegMovetoRelX(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*);
JSC::JSValue* jsSVGPathSegMovetoRelY(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSSVGPathSegMovetoRelY(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*);

} // namespace WebCore

#endif // ENABLE(SVG)

#endif
