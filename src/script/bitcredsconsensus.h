// Copyright (c) 2009-2019 Satoshi Nakamoto
// Copyright (c) 2009-2019 The Bitcoin Developers
// Copyright (c) 2014-2019 The Dash Core Developers
// Copyright (c) 2016-2019 Duality Blockchain Solutions Developers
// Copyright (c) 2017-2021 Bitcreds Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCREDS_BITCREDSCONSENSUS_H
#define BITCREDS_BITCREDSCONSENSUS_H

#if defined(BUILD_BITCREDS_INTERNAL) && defined(HAVE_CONFIG_H)
#include "config/bitcreds-config.h"
  #if defined(_WIN32)
    #if defined(DLL_EXPORT)
      #if defined(HAVE_FUNC_ATTRIBUTE_DLLEXPORT)
        #define EXPORT_SYMBOL __declspec(dllexport)
      #else
        #define EXPORT_SYMBOL
      #endif
    #endif
  #elif defined(HAVE_FUNC_ATTRIBUTE_VISIBILITY)
    #define EXPORT_SYMBOL __attribute__ ((visibility ("default")))
  #endif
#elif defined(MSC_VER) && !defined(STATIC_LIBBITCREDSCONSENSUS)
  #define EXPORT_SYMBOL __declspec(dllimport)
#endif

#ifndef EXPORT_SYMBOL
  #define EXPORT_SYMBOL
#endif

#ifdef __cplusplus
extern "C" {
#endif

#define BITCREDSCONSENSUS_API_VER 0

typedef enum bitcredsconsensus_error_t
{
    bitcredsconsensus_ERR_OK = 0,
    bitcredsconsensus_ERR_TX_INDEX,
    bitcredsconsensus_ERR_TX_SIZE_MISMATCH,
    bitcredsconsensus_ERR_TX_DESERIALIZE,
    bitcredsconsensus_ERR_INVALID_FLAGS,
} bitcredsconsensus_error;

/** Script verification flags */
enum
{
    bitcredsconsensus_SCRIPT_FLAGS_VERIFY_NONE                = 0,
    bitcredsconsensus_SCRIPT_FLAGS_VERIFY_P2SH                = (1U << 0), // evaluate P2SH (BIP16) subscripts
    bitcredsconsensus_SCRIPT_FLAGS_VERIFY_DERSIG              = (1U << 2), // enforce strict DER (BIP66) compliance
    bitcredsconsensus_SCRIPT_FLAGS_VERIFY_CHECKLOCKTIMEVERIFY = (1U << 9), // enable CHECKLOCKTIMEVERIFY (BIP65)
    bitcredsconsensus_SCRIPT_FLAGS_VERIFY_CHECKSEQUENCEVERIFY = (1U << 10), // enable CHECKSEQUENCEVERIFY (BIP112)
    bitcredsconsensus_SCRIPT_FLAGS_VERIFY_ALL                 = bitcredsconsensus_SCRIPT_FLAGS_VERIFY_P2SH | bitcredsconsensus_SCRIPT_FLAGS_VERIFY_DERSIG |
                                                               bitcredsconsensus_SCRIPT_FLAGS_VERIFY_CHECKLOCKTIMEVERIFY | bitcredsconsensus_SCRIPT_FLAGS_VERIFY_CHECKSEQUENCEVERIFY
};

/// Returns 1 if the input nIn of the serialized transaction pointed to by
/// txTo correctly spends the scriptPubKey pointed to by scriptPubKey under
/// the additional constraints specified by flags.
/// If not NULL, err will contain an error/success code for the operation
EXPORT_SYMBOL int bitcredsconsensus_verify_script(const unsigned char *scriptPubKey, unsigned int scriptPubKeyLen,
                                    const unsigned char *txTo        , unsigned int txToLen,
                                    unsigned int nIn, unsigned int flags, bitcredsconsensus_error* err);

EXPORT_SYMBOL unsigned int bitcredsconsensus_version();

#ifdef __cplusplus
} // extern "C"
#endif

#undef EXPORT_SYMBOL

#endif // BITCREDS_BITCREDSCONSENSUS_H
