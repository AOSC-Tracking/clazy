#include <QtCore/QList>
#include <QtCore/QString>

struct SomeStruct
{
    QStringList m_list;
    void test_add_qasconst_fixits()
    {
         for (const auto &s : m_list) {} // Warn
    }

    QStringList getList();
};
