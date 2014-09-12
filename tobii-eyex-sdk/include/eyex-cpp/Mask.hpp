/*********************************************************************************************************************
 * Copyright 2013-2014 Tobii Technology AB. All rights reserved.
 * Mask.hpp
 *********************************************************************************************************************/

#if !defined(__TOBII_TX_CLIENT_CPPBINDINGS_MASK__HPP__)
#define __TOBII_TX_CLIENT_CPPBINDINGS_MASK__HPP__

/*********************************************************************************************************************/

TX_NAMESPACE_BEGIN
	
/*********************************************************************************************************************/

class Mask :
	public InteractionObject
{
public:
	Mask(const std::shared_ptr<const Context>& spContext, TX_HANDLE hMask);
	int GetColumnCount() const;
    int GetRowCount() const;
    void GetData(std::vector<TX_BYTE>& data) const;
};

/*********************************************************************************************************************/

TX_NAMESPACE_END

/*********************************************************************************************************************/


#endif // !defined(__TOBII_TX_CLIENT_CPPBINDINGS_MASK__HPP__)

/*********************************************************************************************************************/