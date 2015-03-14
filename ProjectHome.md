# Introduction #

This is a C++ library for all your **vCard** needs.

For more info please visit: http://www.imc.org/pdi/vcard-21.txt

It depends on **Qt Core** module (from **Qt Framework**, visit: http://www.qt-project.org).

# Installation #

  * Checkout the source tree:

> ` svn checkout http://libvcard.googlecode.com/svn/trunk/ libvcard-read-only `

  * Follow the instructions in the [INSTALL](http://code.google.com/p/libvcard/source/browse/trunk/INSTALL) file.

# Examples #

## Create & serialize a vCard ##

```
#include <vcard.h>

// First we create a valid vCard object...
vCard vcard;

vCardProperty name_prop = vCardProperty::createName("Emanuele", "Bertoldi");

vcard.addProperty(name_prop);

// ...and then we can serialize it and send everywhere.
QByteArray output = vcard.toByteArray();
```

## Parse a vCard stream ##

```
#include <vcard.h>

// Imagine we've read a byte stream from a data source.
QByteArray in = read_data();

// Now we can parse it...
QList<vCard> vcards = vCard::fromByteArray(in);

// ...and then we can use it.
if (!vcards.isEmpty())
{
    vCard vcard = vcards.takeFirst();

    vCardProperty name_prop = vcard.property(VC_NAME);
    if (name_prop.isValid())
    {
        QStringList values = name_prop.values();

        QString firstname = values.at(vCardProperty::Firstname);
        QString lastname = values.at(vCardProperty::Lastname);
    }
}
```

## Convert from a vCard specification revision to another one ##

```
// Imagine we've read a vCard which follows the 2.1 revision of vCard specification...
QByteArray in = read_data();
QList<vCard> vcards = vCard::fromByteArray(in);
vCard vcard = vcards.takeFirst();

// ...we can now write it back following the 3.0 revision.
QByteArray out = vcard.toByteArray(VC_VER_3_0);
```