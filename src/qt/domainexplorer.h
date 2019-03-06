// Copyright (c) 2017 The SEOCOIN developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef DOMAINEXPLORER_H
#define DOMAINEXPLORER_H

#include <QMainWindow>

#include "base58.h"
#include "uint256.h"
#undef loop

namespace Ui
{
class DomainExplorer;
}


class CBlockIndex;
class CTransaction;
class CBlockTreeDB;

std::string getexplorerBlockHashDomain(int64_t);


const CBlockIndex* getexplorerBlockIndexDomain(int64_t);
CTxOut getPrevOutDomain(const COutPoint& out);
void getNextInDomain(const COutPoint* Out, uint256* Hash, unsigned int n);

class DomainExplorer : public QMainWindow
{
    Q_OBJECT

public:
    explicit DomainExplorer(QWidget* parent = 0);
    ~DomainExplorer();

protected:
    void keyPressEvent(QKeyEvent* event);
    void showEvent(QShowEvent*);

private Q_SLOTS:
    void onSearch();
    void goTo(const QString& query);
    void back();
    void forward();

private:
    Ui::DomainExplorer* ui;
    bool m_NeverShown;
    int m_HistoryIndex;
    QStringList m_History;

    void setBlock(CBlockIndex* pBlock);
    bool switchTo(const QString& query);
    void setContent(const std::string& content);
    void updateNavButtons();
    std::string SearchTransactionDomain(std::string search);
};

#endif // DOMAINEXPLORER_H
