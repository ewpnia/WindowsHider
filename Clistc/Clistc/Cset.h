#pragma once


// Cset 对话框

class Cset : public CDialogEx
{
	DECLARE_DYNAMIC(Cset)

public:
	Cset(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Cset();

// 对话框数据
	enum { IDD = IDD_Set_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
