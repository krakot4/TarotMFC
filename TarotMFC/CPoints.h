#pragma once


// Boîte de dialogue CPoints

class CPoints : public CDialogEx
{
	DECLARE_DYNAMIC(CPoints)

public:
	CPoints(CWnd* pParent = NULL);   // constructeur standard
	virtual ~CPoints();

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TAROTMFC_POINTS };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnCbnSelchangeCombo2();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
};
