#ifndef RENAMERPLACEHOLDERS_H
#define RENAMERPLACEHOLDERS_H

#include <QWidget>

namespace Ui {
class RenamerPlaceholders;
}

class RenamerPlaceholders : public QWidget
{
    Q_OBJECT

public:
    explicit RenamerPlaceholders(QWidget *parent = nullptr);
    ~RenamerPlaceholders() override;
    void setType(int renameType);

private:
    Ui::RenamerPlaceholders *ui;
};

#endif // RENAMERPLACEHOLDERS_H
