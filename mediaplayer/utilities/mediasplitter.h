#pragma once

#include "qboxlayout.h"
#include "qdialog.h"
#include "qprogressbar.h"
#include "qstatusbar.h"


class MediaSplitter : public QDialog
{
    Q_OBJECT
public:
    explicit MediaSplitter(QWidget* parent = nullptr);
    explicit MediaSplitter(QWidget* parent, QString mediaFileName,
                           QList<QTime> timeStamps);

    void splitMedia();

private:
    bool splitMediaUtil(uint64_t startSeconds, uint64_t endSeconds);
    QString mediaFileName;
    QList<QTime> timeStamps;
    uint64_t counter;
    QString path;
    QString currentTimeInStr;
    QString fileNameWithoutExt;
    QString fileNameWithExt;
    QString outputDir;
    QString outputFilePath;
    uint64_t startSeconds;
    uint64_t endSeconds;
    QString slash;
    QVBoxLayout* vBoxLayout = nullptr;
    QProgressBar* pBar = nullptr;
    QStatusBar* sBar = nullptr;
};

