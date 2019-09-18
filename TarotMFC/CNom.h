#pragma once


// Boîte de dialogue CNom

class CNom : public CDialogEx
{
	DECLARE_DYNAMIC(CNom)

public:
	CNom(CWnd* pParent = NULL);   // constructeur standard
	virtual ~CNom();

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TAROTMFC_NOM };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnEnChangeEdit4();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
};
