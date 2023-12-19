/* Generated code for Python module 'mysql$opentelemetry$sdk$environment_variables'
 * created by Nuitka version 1.9.5
 *
 * This code is in part copyright 2023 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_mysql$opentelemetry$sdk$environment_variables" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_mysql$opentelemetry$sdk$environment_variables;
PyDictObject *moduledict_mysql$opentelemetry$sdk$environment_variables;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[79];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[79];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("mysql.opentelemetry.sdk.environment_variables"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 79; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_mysql$opentelemetry$sdk$environment_variables(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 79; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_25887a0f656bd1ab5a9691a78878b8ae;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[76]); CHECK_OBJECT(module_filename_obj);
    codeobj_25887a0f656bd1ab5a9691a78878b8ae = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[77], mod_consts[77], NULL, NULL, 0, 0, 0);
}

// The module function declarations.


// The module function definitions.


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

static function_impl_code const function_table_mysql$opentelemetry$sdk$environment_variables[] = {

    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTuple(args, "O:reduce_compiled_function", &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_mysql$opentelemetry$sdk$environment_variables);

    if (unlikely(offset == -1)) {
        PyThreadState *tstate = PyThreadState_GET();
#if 0
        PRINT_STRING("Looking for:");
        PRINT_ITEM(func);
        PRINT_NEW_LINE();
#endif
        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);


    PyObject *result = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 3, function->m_kwdefaults ? function->m_kwdefaults : Py_None);
#else
    PyTuple_SET_ITEM0(result, 3, Py_None);
#endif
    PyTuple_SET_ITEM0(result, 4, function->m_doc != NULL ? function->m_doc : Py_None);

    if (offset == -5) {
        CHECK_OBJECT(function->m_constant_return_value);
        PyTuple_SET_ITEM0(result, 5, function->m_constant_return_value);
    } else {
        PyTuple_SET_ITEM0(result, 5, Py_None);
    }

#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 6, function->m_qualname);
#else
    PyTuple_SET_ITEM0(result, 6, Py_None);
#endif

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS, NULL};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *function_index;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *kw_defaults;
    PyObject *doc;
    PyObject *constant_return_value;
    PyObject *function_qualname;

    if (!PyArg_ParseTuple(args, "OOOOOO:create_compiled_function", &function_index, &code_object_desc, &defaults, &kw_defaults, &doc, &constant_return_value, &function_qualname, NULL)) {
        return NULL;
    }

#if PYTHON_VERSION >= 0x300
    if (kw_defaults == Py_None) {
        kw_defaults = NULL;
    }
#endif

    return (PyObject *)Nuitka_Function_CreateFunctionViaCodeIndex(
        module_mysql$opentelemetry$sdk$environment_variables,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_mysql$opentelemetry$sdk$environment_variables,
        sizeof(function_table_mysql$opentelemetry$sdk$environment_variables) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_mysql$opentelemetry$sdk$environment_variables(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("mysql$opentelemetry$sdk$environment_variables");

    // Store the module for future use.
    module_mysql$opentelemetry$sdk$environment_variables = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants(tstate);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("mysql$opentelemetry$sdk$environment_variables: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("mysql$opentelemetry$sdk$environment_variables: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initmysql$opentelemetry$sdk$environment_variables\n");

    moduledict_mysql$opentelemetry$sdk$environment_variables = MODULE_DICT(module_mysql$opentelemetry$sdk$environment_variables);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }




#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_mysql$opentelemetry$sdk$environment_variables,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_mysql$opentelemetry$sdk$environment_variables,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[78]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_mysql$opentelemetry$sdk$environment_variables,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_mysql$opentelemetry$sdk$environment_variables,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_mysql$opentelemetry$sdk$environment_variables,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_mysql$opentelemetry$sdk$environment_variables);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_mysql$opentelemetry$sdk$environment_variables);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_25887a0f656bd1ab5a9691a78878b8ae;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_2);
    }
    frame_25887a0f656bd1ab5a9691a78878b8ae = MAKE_MODULE_FRAME(codeobj_25887a0f656bd1ab5a9691a78878b8ae, module_mysql$opentelemetry$sdk$environment_variables);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_25887a0f656bd1ab5a9691a78878b8ae);
    assert(Py_REFCNT(frame_25887a0f656bd1ab5a9691a78878b8ae) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_25887a0f656bd1ab5a9691a78878b8ae, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_25887a0f656bd1ab5a9691a78878b8ae->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_25887a0f656bd1ab5a9691a78878b8ae, exception_lineno);
    }



    assertFrameObject(frame_25887a0f656bd1ab5a9691a78878b8ae);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[6];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[11];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[13];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[15];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[16];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[18];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[20];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[22];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[24];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[25];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[26];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[28];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[30];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[31];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[33];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[34];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[37];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[39];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[40];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[42];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[43];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = mod_consts[45];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = mod_consts[46];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = mod_consts[47];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = mod_consts[54];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = mod_consts[55];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = mod_consts[56];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = mod_consts[57];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = mod_consts[58];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = mod_consts[59];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = mod_consts[46];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = mod_consts[60];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = mod_consts[57];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = mod_consts[61];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = mod_consts[54];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = mod_consts[62];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = mod_consts[63];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = mod_consts[64];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = mod_consts[65];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = mod_consts[67];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = mod_consts[68];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = mod_consts[69];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = mod_consts[70];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = mod_consts[71];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = mod_consts[73];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = mod_consts[74];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = mod_consts[75];
        UPDATE_STRING_DICT0(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_77);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("mysql$opentelemetry$sdk$environment_variables", false);

    Py_INCREF(module_mysql$opentelemetry$sdk$environment_variables);
    return module_mysql$opentelemetry$sdk$environment_variables;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mysql$opentelemetry$sdk$environment_variables, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("mysql$opentelemetry$sdk$environment_variables", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
