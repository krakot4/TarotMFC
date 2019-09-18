#pragma once


// Boîte de dialogue CDonne

class CDonne : public CDialogEx
{
	DECLARE_DYNAMIC(CDonne)

public:
	CDonne(CWnd* pParent = NULL);   // constructeur standard
	virtual ~CDonne();

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TAROTMFC_DONNE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnCbnSelchangeCombo1();
	afx_msg void OnCbnSelchangeCombo2();
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
};
