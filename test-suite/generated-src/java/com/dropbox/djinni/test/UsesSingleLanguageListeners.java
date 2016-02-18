// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from single_language_interfaces.djinni

package com.dropbox.djinni.test;

import java.util.concurrent.atomic.AtomicBoolean;
import javax.annotation.CheckForNull;
import javax.annotation.Nonnull;

/**
 * Generating and compiling this makes sure other languages don't break
 * on references to interfaces they don't need.
 */
public abstract class UsesSingleLanguageListeners {
    public abstract void callForObjC(@CheckForNull ObjcOnlyListener l);

    public abstract void callForJava(@CheckForNull JavaOnlyListener l);

    public abstract void callForPy(@CheckForNull PyOnlyListener l);

    private static final class CppProxy extends UsesSingleLanguageListeners
    {
        private final long nativeRef;
        private final AtomicBoolean destroyed = new AtomicBoolean(false);

        private CppProxy(long nativeRef)
        {
            if (nativeRef == 0) throw new RuntimeException("nativeRef is zero");
            this.nativeRef = nativeRef;
        }

        private native void nativeDestroy(long nativeRef);
        public void destroy()
        {
            boolean destroyed = this.destroyed.getAndSet(true);
            if (!destroyed) nativeDestroy(this.nativeRef);
        }
        protected void finalize() throws java.lang.Throwable
        {
            destroy();
            super.finalize();
        }

        @Override
        public void callForObjC(ObjcOnlyListener l)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_callForObjC(this.nativeRef, l);
        }
        private native void native_callForObjC(long _nativeRef, ObjcOnlyListener l);

        @Override
        public void callForJava(JavaOnlyListener l)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_callForJava(this.nativeRef, l);
        }
        private native void native_callForJava(long _nativeRef, JavaOnlyListener l);

        @Override
        public void callForPy(PyOnlyListener l)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_callForPy(this.nativeRef, l);
        }
        private native void native_callForPy(long _nativeRef, PyOnlyListener l);
    }
}
