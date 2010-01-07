// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CXFSPrint wrapper class

class CXFSPrint : public CWnd
{
protected:
	DECLARE_DYNCREATE(CXFSPrint)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x153194ca, 0x33b1, 0x408b, { 0x98, 0xbf, 0x26, 0xf9, 0x7, 0xda, 0x4c, 0x91 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* pContext = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); }

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); }

// Attributes
public:

// Operations
public:
	CString GetXFSMgrPath();
	void SetXFSMgrPath(LPCTSTR lpszNewValue);
	CString GetLogicalService();
	void SetLogicalService(LPCTSTR lpszNewValue);
	CString GetFormName();
	void SetFormName(LPCTSTR lpszNewValue);
	void AddField(LPCTSTR bstrTag, LPCTSTR bstrValue);
	void DoPrint();
	CString GetResult();
	void SetResult(LPCTSTR lpszNewValue);
};