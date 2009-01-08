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

#ifndef JSSVGLength_h
#define JSSVGLength_h


#if ENABLE(SVG)

#include "JSDOMBinding.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/ObjectPrototype.h>
#include "SVGLength.h"
#include "JSSVGPODTypeWrapper.h"

namespace WebCore {

class JSSVGLength : public DOMObject {
    typedef DOMObject Base;
public:
    JSSVGLength(PassRefPtr<JSC::Structure>, PassRefPtr<JSSVGPODTypeWrapper<SVGLength> >, SVGElement* context);
    virtual ~JSSVGLength();
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

    // Custom attributes
    JSC::JSValue* value(JSC::ExecState*) const;

    // Custom functions
    JSC::JSValue* convertToSpecifiedUnits(JSC::ExecState*, const JSC::ArgList&);
    JSSVGPODTypeWrapper<SVGLength>* impl() const { return m_impl.get(); }
    SVGElement* context() const { return m_context.get(); }

private:
    RefPtr<SVGElement> m_context;
    RefPtr<JSSVGPODTypeWrapper<SVGLength> > m_impl;
};

JSC::JSValue* toJS(JSC::ExecState*, JSSVGPODTypeWrapper<SVGLength>*, SVGElement* context);
SVGLength toSVGLength(JSC::JSValue*);

class JSSVGLengthPrototype : public JSC::JSObject {
public:
    static JSC::JSObject* self(JSC::ExecState*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue* prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType));
    }
    JSSVGLengthPrototype(PassRefPtr<JSC::Structure> structure) : JSC::JSObject(structure) { }
};

// Functions

JSC::JSValue* jsSVGLengthPrototypeFunctionNewValueSpecifiedUnits(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsSVGLengthPrototypeFunctionConvertToSpecifiedUnits(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
// Attributes

JSC::JSValue* jsSVGLengthUnitType(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue* jsSVGLengthValue(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSSVGLengthValue(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*);
JSC::JSValue* jsSVGLengthValueInSpecifiedUnits(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSSVGLengthValueInSpecifiedUnits(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*);
JSC::JSValue* jsSVGLengthValueAsString(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSSVGLengthValueAsString(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*);
JSC::JSValue* jsSVGLengthConstructor(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
// Constants

JSC::JSValue* jsSVGLengthSVG_LENGTHTYPE_UNKNOWN(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue* jsSVGLengthSVG_LENGTHTYPE_NUMBER(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue* jsSVGLengthSVG_LENGTHTYPE_PERCENTAGE(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue* jsSVGLengthSVG_LENGTHTYPE_EMS(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue* jsSVGLengthSVG_LENGTHTYPE_EXS(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue* jsSVGLengthSVG_LENGTHTYPE_PX(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue* jsSVGLengthSVG_LENGTHTYPE_CM(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue* jsSVGLengthSVG_LENGTHTYPE_MM(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue* jsSVGLengthSVG_LENGTHTYPE_IN(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue* jsSVGLengthSVG_LENGTHTYPE_PT(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue* jsSVGLengthSVG_LENGTHTYPE_PC(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);

} // namespace WebCore

#endif // ENABLE(SVG)

#endif
