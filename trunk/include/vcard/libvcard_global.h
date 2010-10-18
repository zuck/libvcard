/**
 *
 * This file is part of the libvcard project.
 *
 * Copyright (C) 2010, Emanuele Bertoldi (Card Tech srl).
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * $Revision$
 * $Date$
 */

#ifndef VCARD_GLOBAL_H
#define VCARD_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(VCARD_LIBRARY)
#  define VCARDSHARED_EXPORT Q_DECL_EXPORT
#else
#  define VCARDSHARED_EXPORT Q_DECL_IMPORT
#endif

#define VC_SEPARATOR_TOKEN ';'
#define VC_END_LINE_TOKEN '\n'
#define VC_BEGIN_TOKEN "BEGIN:VCARD"
#define VC_END_TOKEN "END:VCARD"

enum vCardVersion
{
    VC_VER_2_1,
    VC_VER_3_0
};

#endif // VCARD_GLOBAL_H
