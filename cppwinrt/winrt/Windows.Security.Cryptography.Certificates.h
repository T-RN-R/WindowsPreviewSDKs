// C++/WinRT v2.0.191023.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_Cryptography_Certificates_H
#define WINRT_Windows_Security_Cryptography_Certificates_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.191023.3"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Security.Cryptography.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Networking.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Security.Cryptography.Certificates.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::BuildChainAsync(param::async_iterable<Windows::Security::Cryptography::Certificates::Certificate> const& certificates) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->BuildChainAsync(*(void**)(&certificates), &value));
        return Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Certificates::CertificateChain>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::BuildChainAsync(param::async_iterable<Windows::Security::Cryptography::Certificates::Certificate> const& certificates, Windows::Security::Cryptography::Certificates::ChainBuildingParameters const& parameters) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->BuildChainWithParametersAsync(*(void**)(&certificates), *(void**)(&parameters), &value));
        return Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Certificates::CertificateChain>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::SerialNumber() const
    {
        uint32_t value_impl_size{};
        uint8_t* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->get_SerialNumber(&value_impl_size, &value));
        return com_array<uint8_t>{ value, value_impl_size, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::GetHashValue() const
    {
        uint32_t value_impl_size{};
        uint8_t* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->GetHashValue(&value_impl_size, &value));
        return com_array<uint8_t>{ value, value_impl_size, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::GetHashValue(param::hstring const& hashAlgorithmName) const
    {
        uint32_t value_impl_size{};
        uint8_t* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->GetHashValueWithAlgorithm(*(void**)(&hashAlgorithmName), &value_impl_size, &value));
        return com_array<uint8_t>{ value, value_impl_size, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::GetCertificateBlob() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->GetCertificateBlob(&value));
        return Windows::Storage::Streams::IBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::Subject() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->get_Subject(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::Issuer() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->get_Issuer(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::HasPrivateKey() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->get_HasPrivateKey(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::IsStronglyProtected() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->get_IsStronglyProtected(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::ValidFrom() const
    {
        Windows::Foundation::DateTime value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->get_ValidFrom(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::ValidTo() const
    {
        Windows::Foundation::DateTime value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->get_ValidTo(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::EnhancedKeyUsages() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->get_EnhancedKeyUsages(&value));
        return Windows::Foundation::Collections::IVectorView<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::FriendlyName(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->put_FriendlyName(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::FriendlyName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->get_FriendlyName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificate2<D>::IsSecurityDeviceBound() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificate2)->get_IsSecurityDeviceBound(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificate2<D>::KeyUsages() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificate2)->get_KeyUsages(&value));
        return Windows::Security::Cryptography::Certificates::CertificateKeyUsages{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificate2<D>::KeyAlgorithmName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificate2)->get_KeyAlgorithmName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificate2<D>::SignatureAlgorithmName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificate2)->get_SignatureAlgorithmName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificate2<D>::SignatureHashAlgorithmName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificate2)->get_SignatureHashAlgorithmName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificate2<D>::SubjectAlternativeName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificate2)->get_SubjectAlternativeName(&value));
        return Windows::Security::Cryptography::Certificates::SubjectAlternativeNameInfo{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificate3<D>::IsPerUser() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificate3)->get_IsPerUser(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificate3<D>::StoreName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificate3)->get_StoreName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificate3<D>::KeyStorageProviderName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificate3)->get_KeyStorageProviderName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateChain<D>::Validate() const
    {
        Windows::Security::Cryptography::Certificates::ChainValidationResult status;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateChain)->Validate(reinterpret_cast<int32_t*>(&status)));
        return status;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateChain<D>::Validate(Windows::Security::Cryptography::Certificates::ChainValidationParameters const& parameter) const
    {
        Windows::Security::Cryptography::Certificates::ChainValidationResult status;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateChain)->ValidateWithParameters(*(void**)(&parameter), reinterpret_cast<int32_t*>(&status)));
        return status;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateChain<D>::GetCertificates(bool includeRoot) const
    {
        void* certificates{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateChain)->GetCertificates(includeRoot, &certificates));
        return Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>{ certificates, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics<D>::CreateRequestAsync(Windows::Security::Cryptography::Certificates::CertificateRequestProperties const& request) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics)->CreateRequestAsync(*(void**)(&request), &value));
        return Windows::Foundation::IAsyncOperation<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics<D>::InstallCertificateAsync(param::hstring const& certificate, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics)->InstallCertificateAsync(*(void**)(&certificate), static_cast<uint32_t>(installOption), &value));
        return Windows::Foundation::IAsyncAction{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics<D>::ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::ExportOption const& exportable, Windows::Security::Cryptography::Certificates::KeyProtectionLevel const& keyProtectionLevel, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption, param::hstring const& friendlyName) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics)->ImportPfxDataAsync(*(void**)(&pfxData), *(void**)(&password), static_cast<int32_t>(exportable), static_cast<int32_t>(keyProtectionLevel), static_cast<uint32_t>(installOption), *(void**)(&friendlyName), &value));
        return Windows::Foundation::IAsyncAction{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics2<D>::UserCertificateEnrollmentManager() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics2)->get_UserCertificateEnrollmentManager(&value));
        return Windows::Security::Cryptography::Certificates::UserCertificateEnrollmentManager{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics2<D>::ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::ExportOption const& exportable, Windows::Security::Cryptography::Certificates::KeyProtectionLevel const& keyProtectionLevel, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption, param::hstring const& friendlyName, param::hstring const& keyStorageProvider) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics2)->ImportPfxDataToKspAsync(*(void**)(&pfxData), *(void**)(&password), static_cast<int32_t>(exportable), static_cast<int32_t>(keyProtectionLevel), static_cast<uint32_t>(installOption), *(void**)(&friendlyName), *(void**)(&keyStorageProvider), &value));
        return Windows::Foundation::IAsyncAction{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics3<D>::ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::PfxImportParameters const& pfxImportParameters) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics3)->ImportPfxDataToKspWithParametersAsync(*(void**)(&pfxData), *(void**)(&password), *(void**)(&pfxImportParameters), &value));
        return Windows::Foundation::IAsyncAction{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateExtension<D>::ObjectId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateExtension)->get_ObjectId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateExtension<D>::ObjectId(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateExtension)->put_ObjectId(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateExtension<D>::IsCritical() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateExtension)->get_IsCritical(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateExtension<D>::IsCritical(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateExtension)->put_IsCritical(value));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateExtension<D>::EncodeValue(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateExtension)->EncodeValue(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateExtension<D>::Value() const
    {
        uint32_t value_impl_size{};
        uint8_t* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateExtension)->get_Value(&value_impl_size, &value));
        return com_array<uint8_t>{ value, value_impl_size, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateExtension<D>::Value(array_view<uint8_t const> value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateExtension)->put_Value(value.size(), get_abi(value)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateFactory<D>::CreateCertificate(Windows::Storage::Streams::IBuffer const& certBlob) const
    {
        void* certificate{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateFactory)->CreateCertificate(*(void**)(&certBlob), &certificate));
        return Windows::Security::Cryptography::Certificates::Certificate{ certificate, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::EncipherOnly() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->get_EncipherOnly(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::EncipherOnly(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->put_EncipherOnly(value));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::CrlSign() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->get_CrlSign(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::CrlSign(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->put_CrlSign(value));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::KeyCertificateSign() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->get_KeyCertificateSign(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::KeyCertificateSign(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->put_KeyCertificateSign(value));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::KeyAgreement() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->get_KeyAgreement(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::KeyAgreement(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->put_KeyAgreement(value));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::DataEncipherment() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->get_DataEncipherment(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::DataEncipherment(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->put_DataEncipherment(value));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::KeyEncipherment() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->get_KeyEncipherment(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::KeyEncipherment(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->put_KeyEncipherment(value));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::NonRepudiation() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->get_NonRepudiation(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::NonRepudiation(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->put_NonRepudiation(value));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::DigitalSignature() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->get_DigitalSignature(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::DigitalSignature(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->put_DigitalSignature(value));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateQuery<D>::EnhancedKeyUsages() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery)->get_EnhancedKeyUsages(&value));
        return Windows::Foundation::Collections::IVector<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateQuery<D>::IssuerName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery)->get_IssuerName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateQuery<D>::IssuerName(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery)->put_IssuerName(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateQuery<D>::FriendlyName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery)->get_FriendlyName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateQuery<D>::FriendlyName(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery)->put_FriendlyName(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateQuery<D>::Thumbprint() const
    {
        uint32_t value_impl_size{};
        uint8_t* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery)->get_Thumbprint(&value_impl_size, &value));
        return com_array<uint8_t>{ value, value_impl_size, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateQuery<D>::Thumbprint(array_view<uint8_t const> value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery)->put_Thumbprint(value.size(), get_abi(value)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateQuery<D>::HardwareOnly() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery)->get_HardwareOnly(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateQuery<D>::HardwareOnly(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery)->put_HardwareOnly(value));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateQuery2<D>::IncludeDuplicates() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery2)->get_IncludeDuplicates(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateQuery2<D>::IncludeDuplicates(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery2)->put_IncludeDuplicates(value));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateQuery2<D>::IncludeExpiredCertificates() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery2)->get_IncludeExpiredCertificates(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateQuery2<D>::IncludeExpiredCertificates(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery2)->put_IncludeExpiredCertificates(value));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateQuery2<D>::StoreName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery2)->get_StoreName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateQuery2<D>::StoreName(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery2)->put_StoreName(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::Subject() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->get_Subject(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::Subject(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->put_Subject(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::KeyAlgorithmName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->get_KeyAlgorithmName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::KeyAlgorithmName(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->put_KeyAlgorithmName(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::KeySize() const
    {
        uint32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->get_KeySize(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::KeySize(uint32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->put_KeySize(value));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::FriendlyName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->get_FriendlyName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::FriendlyName(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->put_FriendlyName(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::HashAlgorithmName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->get_HashAlgorithmName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::HashAlgorithmName(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->put_HashAlgorithmName(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::Exportable() const
    {
        Windows::Security::Cryptography::Certificates::ExportOption value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->get_Exportable(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::Exportable(Windows::Security::Cryptography::Certificates::ExportOption const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->put_Exportable(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::KeyUsages() const
    {
        Windows::Security::Cryptography::Certificates::EnrollKeyUsages value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->get_KeyUsages(reinterpret_cast<uint32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::KeyUsages(Windows::Security::Cryptography::Certificates::EnrollKeyUsages const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->put_KeyUsages(static_cast<uint32_t>(value)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::KeyProtectionLevel() const
    {
        Windows::Security::Cryptography::Certificates::KeyProtectionLevel value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->get_KeyProtectionLevel(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::KeyProtectionLevel(Windows::Security::Cryptography::Certificates::KeyProtectionLevel const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->put_KeyProtectionLevel(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::KeyStorageProviderName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->get_KeyStorageProviderName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::KeyStorageProviderName(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->put_KeyStorageProviderName(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties2<D>::SmartcardReaderName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2)->get_SmartcardReaderName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties2<D>::SmartcardReaderName(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2)->put_SmartcardReaderName(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties2<D>::SigningCertificate() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2)->get_SigningCertificate(&value));
        return Windows::Security::Cryptography::Certificates::Certificate{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties2<D>::SigningCertificate(Windows::Security::Cryptography::Certificates::Certificate const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2)->put_SigningCertificate(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties2<D>::AttestationCredentialCertificate() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2)->get_AttestationCredentialCertificate(&value));
        return Windows::Security::Cryptography::Certificates::Certificate{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties2<D>::AttestationCredentialCertificate(Windows::Security::Cryptography::Certificates::Certificate const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2)->put_AttestationCredentialCertificate(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties3<D>::CurveName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3)->get_CurveName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties3<D>::CurveName(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3)->put_CurveName(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties3<D>::CurveParameters() const
    {
        uint32_t value_impl_size{};
        uint8_t* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3)->get_CurveParameters(&value_impl_size, &value));
        return com_array<uint8_t>{ value, value_impl_size, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties3<D>::CurveParameters(array_view<uint8_t const> value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3)->put_CurveParameters(value.size(), get_abi(value)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties3<D>::ContainerNamePrefix() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3)->get_ContainerNamePrefix(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties3<D>::ContainerNamePrefix(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3)->put_ContainerNamePrefix(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties3<D>::ContainerName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3)->get_ContainerName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties3<D>::ContainerName(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3)->put_ContainerName(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties3<D>::UseExistingKey() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3)->get_UseExistingKey(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties3<D>::UseExistingKey(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3)->put_UseExistingKey(value));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties4<D>::SuppressedDefaults() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties4)->get_SuppressedDefaults(&value));
        return Windows::Foundation::Collections::IVector<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties4<D>::SubjectAlternativeName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties4)->get_SubjectAlternativeName(&value));
        return Windows::Security::Cryptography::Certificates::SubjectAlternativeNameInfo{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties4<D>::Extensions() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties4)->get_Extensions(&value));
        return Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::CertificateExtension>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateStore<D>::Add(Windows::Security::Cryptography::Certificates::Certificate const& certificate) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateStore)->Add(*(void**)(&certificate)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateStore<D>::Delete(Windows::Security::Cryptography::Certificates::Certificate const& certificate) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateStore)->Delete(*(void**)(&certificate)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateStore2<D>::Name() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateStore2)->get_Name(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateStoresStatics<D>::FindAllAsync() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateStoresStatics)->FindAllAsync(&value));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateStoresStatics<D>::FindAllAsync(Windows::Security::Cryptography::Certificates::CertificateQuery const& query) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateStoresStatics)->FindAllWithQueryAsync(*(void**)(&query), &value));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateStoresStatics<D>::TrustedRootCertificationAuthorities() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateStoresStatics)->get_TrustedRootCertificationAuthorities(&value));
        return Windows::Security::Cryptography::Certificates::CertificateStore{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateStoresStatics<D>::IntermediateCertificationAuthorities() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateStoresStatics)->get_IntermediateCertificationAuthorities(&value));
        return Windows::Security::Cryptography::Certificates::CertificateStore{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateStoresStatics<D>::GetStoreByName(param::hstring const& storeName) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateStoresStatics)->GetStoreByName(*(void**)(&storeName), &value));
        return Windows::Security::Cryptography::Certificates::CertificateStore{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICertificateStoresStatics2<D>::GetUserStoreByName(param::hstring const& storeName) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICertificateStoresStatics2)->GetUserStoreByName(*(void**)(&storeName), &result));
        return Windows::Security::Cryptography::Certificates::UserCertificateStore{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters<D>::EnhancedKeyUsages() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IChainBuildingParameters)->get_EnhancedKeyUsages(&value));
        return Windows::Foundation::Collections::IVector<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters<D>::ValidationTimestamp() const
    {
        Windows::Foundation::DateTime value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IChainBuildingParameters)->get_ValidationTimestamp(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters<D>::ValidationTimestamp(Windows::Foundation::DateTime const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IChainBuildingParameters)->put_ValidationTimestamp(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters<D>::RevocationCheckEnabled() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IChainBuildingParameters)->get_RevocationCheckEnabled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters<D>::RevocationCheckEnabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IChainBuildingParameters)->put_RevocationCheckEnabled(value));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters<D>::NetworkRetrievalEnabled() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IChainBuildingParameters)->get_NetworkRetrievalEnabled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters<D>::NetworkRetrievalEnabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IChainBuildingParameters)->put_NetworkRetrievalEnabled(value));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters<D>::AuthorityInformationAccessEnabled() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IChainBuildingParameters)->get_AuthorityInformationAccessEnabled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters<D>::AuthorityInformationAccessEnabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IChainBuildingParameters)->put_AuthorityInformationAccessEnabled(value));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters<D>::CurrentTimeValidationEnabled() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IChainBuildingParameters)->get_CurrentTimeValidationEnabled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters<D>::CurrentTimeValidationEnabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IChainBuildingParameters)->put_CurrentTimeValidationEnabled(value));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters<D>::ExclusiveTrustRoots() const
    {
        void* certificates{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IChainBuildingParameters)->get_ExclusiveTrustRoots(&certificates));
        return Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::Certificate>{ certificates, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IChainValidationParameters<D>::CertificateChainPolicy() const
    {
        Windows::Security::Cryptography::Certificates::CertificateChainPolicy value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IChainValidationParameters)->get_CertificateChainPolicy(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IChainValidationParameters<D>::CertificateChainPolicy(Windows::Security::Cryptography::Certificates::CertificateChainPolicy const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IChainValidationParameters)->put_CertificateChainPolicy(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IChainValidationParameters<D>::ServerDnsName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IChainValidationParameters)->get_ServerDnsName(&value));
        return Windows::Networking::HostName{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IChainValidationParameters<D>::ServerDnsName(Windows::Networking::HostName const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IChainValidationParameters)->put_ServerDnsName(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICmsAttachedSignature<D>::Certificates() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICmsAttachedSignature)->get_Certificates(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICmsAttachedSignature<D>::Content() const
    {
        uint32_t value_impl_size{};
        uint8_t* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICmsAttachedSignature)->get_Content(&value_impl_size, &value));
        return com_array<uint8_t>{ value, value_impl_size, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICmsAttachedSignature<D>::Signers() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICmsAttachedSignature)->get_Signers(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::CmsSignerInfo>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICmsAttachedSignature<D>::VerifySignature() const
    {
        Windows::Security::Cryptography::Certificates::SignatureValidationResult value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICmsAttachedSignature)->VerifySignature(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICmsAttachedSignatureFactory<D>::CreateCmsAttachedSignature(Windows::Storage::Streams::IBuffer const& inputBlob) const
    {
        void* cmsSignedData{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureFactory)->CreateCmsAttachedSignature(*(void**)(&inputBlob), &cmsSignedData));
        return Windows::Security::Cryptography::Certificates::CmsAttachedSignature{ cmsSignedData, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICmsAttachedSignatureStatics<D>::GenerateSignatureAsync(Windows::Storage::Streams::IBuffer const& data, param::async_iterable<Windows::Security::Cryptography::Certificates::CmsSignerInfo> const& signers, param::async_iterable<Windows::Security::Cryptography::Certificates::Certificate> const& certificates) const
    {
        void* outputBlob{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureStatics)->GenerateSignatureAsync(*(void**)(&data), *(void**)(&signers), *(void**)(&certificates), &outputBlob));
        return Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>{ outputBlob, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICmsDetachedSignature<D>::Certificates() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICmsDetachedSignature)->get_Certificates(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICmsDetachedSignature<D>::Signers() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICmsDetachedSignature)->get_Signers(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::CmsSignerInfo>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICmsDetachedSignature<D>::VerifySignatureAsync(Windows::Storage::Streams::IInputStream const& data) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICmsDetachedSignature)->VerifySignatureAsync(*(void**)(&data), &value));
        return Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Certificates::SignatureValidationResult>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICmsDetachedSignatureFactory<D>::CreateCmsDetachedSignature(Windows::Storage::Streams::IBuffer const& inputBlob) const
    {
        void* cmsSignedData{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureFactory)->CreateCmsDetachedSignature(*(void**)(&inputBlob), &cmsSignedData));
        return Windows::Security::Cryptography::Certificates::CmsDetachedSignature{ cmsSignedData, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICmsDetachedSignatureStatics<D>::GenerateSignatureAsync(Windows::Storage::Streams::IInputStream const& data, param::async_iterable<Windows::Security::Cryptography::Certificates::CmsSignerInfo> const& signers, param::async_iterable<Windows::Security::Cryptography::Certificates::Certificate> const& certificates) const
    {
        void* outputBlob{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureStatics)->GenerateSignatureAsync(*(void**)(&data), *(void**)(&signers), *(void**)(&certificates), &outputBlob));
        return Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>{ outputBlob, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICmsSignerInfo<D>::Certificate() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICmsSignerInfo)->get_Certificate(&value));
        return Windows::Security::Cryptography::Certificates::Certificate{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICmsSignerInfo<D>::Certificate(Windows::Security::Cryptography::Certificates::Certificate const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICmsSignerInfo)->put_Certificate(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICmsSignerInfo<D>::HashAlgorithmName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICmsSignerInfo)->get_HashAlgorithmName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICmsSignerInfo<D>::HashAlgorithmName(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICmsSignerInfo)->put_HashAlgorithmName(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICmsSignerInfo<D>::TimestampInfo() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICmsSignerInfo)->get_TimestampInfo(&value));
        return Windows::Security::Cryptography::Certificates::CmsTimestampInfo{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICmsTimestampInfo<D>::SigningCertificate() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICmsTimestampInfo)->get_SigningCertificate(&value));
        return Windows::Security::Cryptography::Certificates::Certificate{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICmsTimestampInfo<D>::Certificates() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICmsTimestampInfo)->get_Certificates(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ICmsTimestampInfo<D>::Timestamp() const
    {
        Windows::Foundation::DateTime value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ICmsTimestampInfo)->get_Timestamp(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics<D>::Rsa() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics)->get_Rsa(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics<D>::Dsa() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics)->get_Dsa(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics<D>::Ecdh256() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics)->get_Ecdh256(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics<D>::Ecdh384() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics)->get_Ecdh384(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics<D>::Ecdh521() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics)->get_Ecdh521(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics<D>::Ecdsa256() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics)->get_Ecdsa256(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics<D>::Ecdsa384() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics)->get_Ecdsa384(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics<D>::Ecdsa521() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics)->get_Ecdsa521(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics2<D>::Ecdsa() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics2)->get_Ecdsa(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics2<D>::Ecdh() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics2)->get_Ecdh(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IKeyAttestationHelperStatics<D>::DecryptTpmAttestationCredentialAsync(param::hstring const& credential) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics)->DecryptTpmAttestationCredentialAsync(*(void**)(&credential), &value));
        return Windows::Foundation::IAsyncOperation<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IKeyAttestationHelperStatics<D>::GetTpmAttestationCredentialId(param::hstring const& credential) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics)->GetTpmAttestationCredentialId(*(void**)(&credential), &value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IKeyAttestationHelperStatics2<D>::DecryptTpmAttestationCredentialAsync(param::hstring const& credential, param::hstring const& containerName) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics2)->DecryptTpmAttestationCredentialWithContainerNameAsync(*(void**)(&credential), *(void**)(&containerName), &value));
        return Windows::Foundation::IAsyncOperation<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IKeyStorageProviderNamesStatics<D>::SoftwareKeyStorageProvider() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics)->get_SoftwareKeyStorageProvider(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IKeyStorageProviderNamesStatics<D>::SmartcardKeyStorageProvider() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics)->get_SmartcardKeyStorageProvider(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IKeyStorageProviderNamesStatics<D>::PlatformKeyStorageProvider() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics)->get_PlatformKeyStorageProvider(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IKeyStorageProviderNamesStatics2<D>::PassportKeyStorageProvider() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics2)->get_PassportKeyStorageProvider(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::Exportable() const
    {
        Windows::Security::Cryptography::Certificates::ExportOption value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->get_Exportable(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::Exportable(Windows::Security::Cryptography::Certificates::ExportOption const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->put_Exportable(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::KeyProtectionLevel() const
    {
        Windows::Security::Cryptography::Certificates::KeyProtectionLevel value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->get_KeyProtectionLevel(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::KeyProtectionLevel(Windows::Security::Cryptography::Certificates::KeyProtectionLevel const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->put_KeyProtectionLevel(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::InstallOptions() const
    {
        Windows::Security::Cryptography::Certificates::InstallOptions value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->get_InstallOptions(reinterpret_cast<uint32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::InstallOptions(Windows::Security::Cryptography::Certificates::InstallOptions const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->put_InstallOptions(static_cast<uint32_t>(value)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::FriendlyName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->get_FriendlyName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::FriendlyName(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->put_FriendlyName(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::KeyStorageProviderName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->get_KeyStorageProviderName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::KeyStorageProviderName(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->put_KeyStorageProviderName(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::ContainerNamePrefix() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->get_ContainerNamePrefix(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::ContainerNamePrefix(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->put_ContainerNamePrefix(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::ReaderName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->get_ReaderName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::ReaderName(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->put_ReaderName(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IStandardCertificateStoreNamesStatics<D>::Personal() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IStandardCertificateStoreNamesStatics)->get_Personal(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IStandardCertificateStoreNamesStatics<D>::TrustedRootCertificationAuthorities() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IStandardCertificateStoreNamesStatics)->get_TrustedRootCertificationAuthorities(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IStandardCertificateStoreNamesStatics<D>::IntermediateCertificationAuthorities() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IStandardCertificateStoreNamesStatics)->get_IntermediateCertificationAuthorities(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo<D>::EmailName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo)->get_EmailName(&value));
        return Windows::Foundation::Collections::IVectorView<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo<D>::IPAddress() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo)->get_IPAddress(&value));
        return Windows::Foundation::Collections::IVectorView<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo<D>::Url() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo)->get_Url(&value));
        return Windows::Foundation::Collections::IVectorView<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo<D>::DnsName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo)->get_DnsName(&value));
        return Windows::Foundation::Collections::IVectorView<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo<D>::DistinguishedName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo)->get_DistinguishedName(&value));
        return Windows::Foundation::Collections::IVectorView<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo<D>::PrincipalName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo)->get_PrincipalName(&value));
        return Windows::Foundation::Collections::IVectorView<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo2<D>::EmailNames() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2)->get_EmailNames(&value));
        return Windows::Foundation::Collections::IVector<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo2<D>::IPAddresses() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2)->get_IPAddresses(&value));
        return Windows::Foundation::Collections::IVector<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo2<D>::Urls() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2)->get_Urls(&value));
        return Windows::Foundation::Collections::IVector<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo2<D>::DnsNames() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2)->get_DnsNames(&value));
        return Windows::Foundation::Collections::IVector<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo2<D>::DistinguishedNames() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2)->get_DistinguishedNames(&value));
        return Windows::Foundation::Collections::IVector<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo2<D>::PrincipalNames() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2)->get_PrincipalNames(&value));
        return Windows::Foundation::Collections::IVector<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo2<D>::Extension() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2)->get_Extension(&value));
        return Windows::Security::Cryptography::Certificates::CertificateExtension{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IUserCertificateEnrollmentManager<D>::CreateRequestAsync(Windows::Security::Cryptography::Certificates::CertificateRequestProperties const& request) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager)->CreateRequestAsync(*(void**)(&request), &value));
        return Windows::Foundation::IAsyncOperation<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IUserCertificateEnrollmentManager<D>::InstallCertificateAsync(param::hstring const& certificate, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager)->InstallCertificateAsync(*(void**)(&certificate), static_cast<uint32_t>(installOption), &value));
        return Windows::Foundation::IAsyncAction{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IUserCertificateEnrollmentManager<D>::ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::ExportOption const& exportable, Windows::Security::Cryptography::Certificates::KeyProtectionLevel const& keyProtectionLevel, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption, param::hstring const& friendlyName) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager)->ImportPfxDataAsync(*(void**)(&pfxData), *(void**)(&password), static_cast<int32_t>(exportable), static_cast<int32_t>(keyProtectionLevel), static_cast<uint32_t>(installOption), *(void**)(&friendlyName), &value));
        return Windows::Foundation::IAsyncAction{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IUserCertificateEnrollmentManager<D>::ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::ExportOption const& exportable, Windows::Security::Cryptography::Certificates::KeyProtectionLevel const& keyProtectionLevel, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption, param::hstring const& friendlyName, param::hstring const& keyStorageProvider) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager)->ImportPfxDataToKspAsync(*(void**)(&pfxData), *(void**)(&password), static_cast<int32_t>(exportable), static_cast<int32_t>(keyProtectionLevel), static_cast<uint32_t>(installOption), *(void**)(&friendlyName), *(void**)(&keyStorageProvider), &value));
        return Windows::Foundation::IAsyncAction{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IUserCertificateEnrollmentManager2<D>::ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::PfxImportParameters const& pfxImportParameters) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager2)->ImportPfxDataToKspWithParametersAsync(*(void**)(&pfxData), *(void**)(&password), *(void**)(&pfxImportParameters), &value));
        return Windows::Foundation::IAsyncAction{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IUserCertificateStore<D>::RequestAddAsync(Windows::Security::Cryptography::Certificates::Certificate const& certificate) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IUserCertificateStore)->RequestAddAsync(*(void**)(&certificate), &result));
        return Windows::Foundation::IAsyncOperation<bool>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IUserCertificateStore<D>::RequestDeleteAsync(Windows::Security::Cryptography::Certificates::Certificate const& certificate) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IUserCertificateStore)->RequestDeleteAsync(*(void**)(&certificate), &result));
        return Windows::Foundation::IAsyncOperation<bool>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_Cryptography_Certificates_IUserCertificateStore<D>::Name() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Security::Cryptography::Certificates::IUserCertificateStore)->get_Name(&value));
        return hstring{ value, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::ICertificate> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificate>
    {
        int32_t __stdcall BuildChainAsync(void* certificates, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Certificates::CertificateChain>>(this->shim().BuildChainAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::Certificate> const*>(&certificates)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall BuildChainWithParametersAsync(void* certificates, void* parameters, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Certificates::CertificateChain>>(this->shim().BuildChainAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::Certificate> const*>(&certificates), *reinterpret_cast<Windows::Security::Cryptography::Certificates::ChainBuildingParameters const*>(&parameters)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SerialNumber(uint32_t* __valueSize, uint8_t** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueSize, *value) = detach_abi(this->shim().SerialNumber());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetHashValue(uint32_t* __valueSize, uint8_t** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueSize, *value) = detach_abi(this->shim().GetHashValue());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetHashValueWithAlgorithm(void* hashAlgorithmName, uint32_t* __valueSize, uint8_t** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueSize, *value) = detach_abi(this->shim().GetHashValue(*reinterpret_cast<hstring const*>(&hashAlgorithmName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetCertificateBlob(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().GetCertificateBlob());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Subject(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Subject());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Issuer(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Issuer());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HasPrivateKey(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasPrivateKey());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsStronglyProtected(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsStronglyProtected());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ValidFrom(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().ValidFrom());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ValidTo(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().ValidTo());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EnhancedKeyUsages(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().EnhancedKeyUsages());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_FriendlyName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FriendlyName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FriendlyName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FriendlyName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::ICertificate2> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificate2>
    {
        int32_t __stdcall get_IsSecurityDeviceBound(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsSecurityDeviceBound());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_KeyUsages(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Certificates::CertificateKeyUsages>(this->shim().KeyUsages());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_KeyAlgorithmName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().KeyAlgorithmName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SignatureAlgorithmName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SignatureAlgorithmName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SignatureHashAlgorithmName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SignatureHashAlgorithmName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SubjectAlternativeName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Certificates::SubjectAlternativeNameInfo>(this->shim().SubjectAlternativeName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::ICertificate3> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificate3>
    {
        int32_t __stdcall get_IsPerUser(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsPerUser());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StoreName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().StoreName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_KeyStorageProviderName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().KeyStorageProviderName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateChain> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateChain>
    {
        int32_t __stdcall Validate(int32_t* status) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *status = detach_from<Windows::Security::Cryptography::Certificates::ChainValidationResult>(this->shim().Validate());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ValidateWithParameters(void* parameter, int32_t* status) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *status = detach_from<Windows::Security::Cryptography::Certificates::ChainValidationResult>(this->shim().Validate(*reinterpret_cast<Windows::Security::Cryptography::Certificates::ChainValidationParameters const*>(&parameter)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetCertificates(bool includeRoot, void** certificates) noexcept final try
        {
            clear_abi(certificates);
            typename D::abi_guard guard(this->shim());
            *certificates = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>>(this->shim().GetCertificates(includeRoot));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics>
    {
        int32_t __stdcall CreateRequestAsync(void* request, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().CreateRequestAsync(*reinterpret_cast<Windows::Security::Cryptography::Certificates::CertificateRequestProperties const*>(&request)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall InstallCertificateAsync(void* certificate, uint32_t installOption, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncAction>(this->shim().InstallCertificateAsync(*reinterpret_cast<hstring const*>(&certificate), *reinterpret_cast<Windows::Security::Cryptography::Certificates::InstallOptions const*>(&installOption)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ImportPfxDataAsync(void* pfxData, void* password, int32_t exportable, int32_t keyProtectionLevel, uint32_t installOption, void* friendlyName, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ImportPfxDataAsync(*reinterpret_cast<hstring const*>(&pfxData), *reinterpret_cast<hstring const*>(&password), *reinterpret_cast<Windows::Security::Cryptography::Certificates::ExportOption const*>(&exportable), *reinterpret_cast<Windows::Security::Cryptography::Certificates::KeyProtectionLevel const*>(&keyProtectionLevel), *reinterpret_cast<Windows::Security::Cryptography::Certificates::InstallOptions const*>(&installOption), *reinterpret_cast<hstring const*>(&friendlyName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics2> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics2>
    {
        int32_t __stdcall get_UserCertificateEnrollmentManager(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Certificates::UserCertificateEnrollmentManager>(this->shim().UserCertificateEnrollmentManager());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ImportPfxDataToKspAsync(void* pfxData, void* password, int32_t exportable, int32_t keyProtectionLevel, uint32_t installOption, void* friendlyName, void* keyStorageProvider, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ImportPfxDataAsync(*reinterpret_cast<hstring const*>(&pfxData), *reinterpret_cast<hstring const*>(&password), *reinterpret_cast<Windows::Security::Cryptography::Certificates::ExportOption const*>(&exportable), *reinterpret_cast<Windows::Security::Cryptography::Certificates::KeyProtectionLevel const*>(&keyProtectionLevel), *reinterpret_cast<Windows::Security::Cryptography::Certificates::InstallOptions const*>(&installOption), *reinterpret_cast<hstring const*>(&friendlyName), *reinterpret_cast<hstring const*>(&keyStorageProvider)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics3> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics3>
    {
        int32_t __stdcall ImportPfxDataToKspWithParametersAsync(void* pfxData, void* password, void* pfxImportParameters, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ImportPfxDataAsync(*reinterpret_cast<hstring const*>(&pfxData), *reinterpret_cast<hstring const*>(&password), *reinterpret_cast<Windows::Security::Cryptography::Certificates::PfxImportParameters const*>(&pfxImportParameters)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateExtension> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateExtension>
    {
        int32_t __stdcall get_ObjectId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ObjectId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ObjectId(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ObjectId(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsCritical(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCritical());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsCritical(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsCritical(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall EncodeValue(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EncodeValue(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Value(uint32_t* __valueSize, uint8_t** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueSize, *value) = detach_abi(this->shim().Value());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Value(uint32_t __valueSize, uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(value), reinterpret_cast<uint8_t const *>(value) + __valueSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateFactory> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateFactory>
    {
        int32_t __stdcall CreateCertificate(void* certBlob, void** certificate) noexcept final try
        {
            clear_abi(certificate);
            typename D::abi_guard guard(this->shim());
            *certificate = detach_from<Windows::Security::Cryptography::Certificates::Certificate>(this->shim().CreateCertificate(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&certBlob)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateKeyUsages> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateKeyUsages>
    {
        int32_t __stdcall get_EncipherOnly(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().EncipherOnly());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_EncipherOnly(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EncipherOnly(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CrlSign(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CrlSign());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CrlSign(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CrlSign(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_KeyCertificateSign(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().KeyCertificateSign());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_KeyCertificateSign(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyCertificateSign(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_KeyAgreement(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().KeyAgreement());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_KeyAgreement(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyAgreement(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DataEncipherment(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().DataEncipherment());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DataEncipherment(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DataEncipherment(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_KeyEncipherment(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().KeyEncipherment());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_KeyEncipherment(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyEncipherment(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NonRepudiation(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().NonRepudiation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_NonRepudiation(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NonRepudiation(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DigitalSignature(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().DigitalSignature());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DigitalSignature(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DigitalSignature(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateQuery> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateQuery>
    {
        int32_t __stdcall get_EnhancedKeyUsages(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().EnhancedKeyUsages());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IssuerName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().IssuerName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IssuerName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IssuerName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FriendlyName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FriendlyName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_FriendlyName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FriendlyName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Thumbprint(uint32_t* __valueSize, uint8_t** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueSize, *value) = detach_abi(this->shim().Thumbprint());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Thumbprint(uint32_t __valueSize, uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Thumbprint(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(value), reinterpret_cast<uint8_t const *>(value) + __valueSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HardwareOnly(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HardwareOnly());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_HardwareOnly(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HardwareOnly(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateQuery2> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateQuery2>
    {
        int32_t __stdcall get_IncludeDuplicates(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IncludeDuplicates());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IncludeDuplicates(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IncludeDuplicates(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IncludeExpiredCertificates(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IncludeExpiredCertificates());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IncludeExpiredCertificates(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IncludeExpiredCertificates(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StoreName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().StoreName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_StoreName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StoreName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateRequestProperties> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateRequestProperties>
    {
        int32_t __stdcall get_Subject(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Subject());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Subject(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Subject(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_KeyAlgorithmName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().KeyAlgorithmName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_KeyAlgorithmName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyAlgorithmName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_KeySize(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().KeySize());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_KeySize(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeySize(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FriendlyName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FriendlyName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_FriendlyName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FriendlyName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HashAlgorithmName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().HashAlgorithmName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_HashAlgorithmName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HashAlgorithmName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Exportable(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Certificates::ExportOption>(this->shim().Exportable());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Exportable(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Exportable(*reinterpret_cast<Windows::Security::Cryptography::Certificates::ExportOption const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_KeyUsages(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Certificates::EnrollKeyUsages>(this->shim().KeyUsages());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_KeyUsages(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyUsages(*reinterpret_cast<Windows::Security::Cryptography::Certificates::EnrollKeyUsages const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_KeyProtectionLevel(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Certificates::KeyProtectionLevel>(this->shim().KeyProtectionLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_KeyProtectionLevel(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyProtectionLevel(*reinterpret_cast<Windows::Security::Cryptography::Certificates::KeyProtectionLevel const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_KeyStorageProviderName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().KeyStorageProviderName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_KeyStorageProviderName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyStorageProviderName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2>
    {
        int32_t __stdcall get_SmartcardReaderName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SmartcardReaderName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_SmartcardReaderName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SmartcardReaderName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SigningCertificate(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Certificates::Certificate>(this->shim().SigningCertificate());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_SigningCertificate(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SigningCertificate(*reinterpret_cast<Windows::Security::Cryptography::Certificates::Certificate const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AttestationCredentialCertificate(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Certificates::Certificate>(this->shim().AttestationCredentialCertificate());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AttestationCredentialCertificate(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AttestationCredentialCertificate(*reinterpret_cast<Windows::Security::Cryptography::Certificates::Certificate const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3>
    {
        int32_t __stdcall get_CurveName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CurveName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CurveName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CurveName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CurveParameters(uint32_t* __valueSize, uint8_t** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueSize, *value) = detach_abi(this->shim().CurveParameters());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CurveParameters(uint32_t __valueSize, uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CurveParameters(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(value), reinterpret_cast<uint8_t const *>(value) + __valueSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ContainerNamePrefix(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ContainerNamePrefix());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ContainerNamePrefix(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContainerNamePrefix(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ContainerName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ContainerName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ContainerName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContainerName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UseExistingKey(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().UseExistingKey());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_UseExistingKey(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UseExistingKey(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateRequestProperties4> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateRequestProperties4>
    {
        int32_t __stdcall get_SuppressedDefaults(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().SuppressedDefaults());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SubjectAlternativeName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Certificates::SubjectAlternativeNameInfo>(this->shim().SubjectAlternativeName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Extensions(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::CertificateExtension>>(this->shim().Extensions());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateStore> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateStore>
    {
        int32_t __stdcall Add(void* certificate) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Add(*reinterpret_cast<Windows::Security::Cryptography::Certificates::Certificate const*>(&certificate));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Delete(void* certificate) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Delete(*reinterpret_cast<Windows::Security::Cryptography::Certificates::Certificate const*>(&certificate));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateStore2> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateStore2>
    {
        int32_t __stdcall get_Name(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateStoresStatics> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateStoresStatics>
    {
        int32_t __stdcall FindAllAsync(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>>>(this->shim().FindAllAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindAllWithQueryAsync(void* query, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>>>(this->shim().FindAllAsync(*reinterpret_cast<Windows::Security::Cryptography::Certificates::CertificateQuery const*>(&query)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TrustedRootCertificationAuthorities(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Certificates::CertificateStore>(this->shim().TrustedRootCertificationAuthorities());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IntermediateCertificationAuthorities(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Certificates::CertificateStore>(this->shim().IntermediateCertificationAuthorities());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetStoreByName(void* storeName, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Certificates::CertificateStore>(this->shim().GetStoreByName(*reinterpret_cast<hstring const*>(&storeName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateStoresStatics2> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateStoresStatics2>
    {
        int32_t __stdcall GetUserStoreByName(void* storeName, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Security::Cryptography::Certificates::UserCertificateStore>(this->shim().GetUserStoreByName(*reinterpret_cast<hstring const*>(&storeName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::IChainBuildingParameters> : produce_base<D, Windows::Security::Cryptography::Certificates::IChainBuildingParameters>
    {
        int32_t __stdcall get_EnhancedKeyUsages(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().EnhancedKeyUsages());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ValidationTimestamp(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().ValidationTimestamp());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ValidationTimestamp(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ValidationTimestamp(*reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RevocationCheckEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().RevocationCheckEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RevocationCheckEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RevocationCheckEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NetworkRetrievalEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().NetworkRetrievalEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_NetworkRetrievalEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NetworkRetrievalEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AuthorityInformationAccessEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AuthorityInformationAccessEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AuthorityInformationAccessEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AuthorityInformationAccessEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CurrentTimeValidationEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CurrentTimeValidationEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CurrentTimeValidationEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CurrentTimeValidationEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ExclusiveTrustRoots(void** certificates) noexcept final try
        {
            clear_abi(certificates);
            typename D::abi_guard guard(this->shim());
            *certificates = detach_from<Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::Certificate>>(this->shim().ExclusiveTrustRoots());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::IChainValidationParameters> : produce_base<D, Windows::Security::Cryptography::Certificates::IChainValidationParameters>
    {
        int32_t __stdcall get_CertificateChainPolicy(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Certificates::CertificateChainPolicy>(this->shim().CertificateChainPolicy());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CertificateChainPolicy(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CertificateChainPolicy(*reinterpret_cast<Windows::Security::Cryptography::Certificates::CertificateChainPolicy const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ServerDnsName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::HostName>(this->shim().ServerDnsName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ServerDnsName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ServerDnsName(*reinterpret_cast<Windows::Networking::HostName const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::ICmsAttachedSignature> : produce_base<D, Windows::Security::Cryptography::Certificates::ICmsAttachedSignature>
    {
        int32_t __stdcall get_Certificates(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>>(this->shim().Certificates());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Content(uint32_t* __valueSize, uint8_t** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueSize, *value) = detach_abi(this->shim().Content());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Signers(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::CmsSignerInfo>>(this->shim().Signers());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall VerifySignature(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Certificates::SignatureValidationResult>(this->shim().VerifySignature());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureFactory> : produce_base<D, Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureFactory>
    {
        int32_t __stdcall CreateCmsAttachedSignature(void* inputBlob, void** cmsSignedData) noexcept final try
        {
            clear_abi(cmsSignedData);
            typename D::abi_guard guard(this->shim());
            *cmsSignedData = detach_from<Windows::Security::Cryptography::Certificates::CmsAttachedSignature>(this->shim().CreateCmsAttachedSignature(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&inputBlob)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureStatics> : produce_base<D, Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureStatics>
    {
        int32_t __stdcall GenerateSignatureAsync(void* data, void* signers, void* certificates, void** outputBlob) noexcept final try
        {
            clear_abi(outputBlob);
            typename D::abi_guard guard(this->shim());
            *outputBlob = detach_from<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>>(this->shim().GenerateSignatureAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::CmsSignerInfo> const*>(&signers), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::Certificate> const*>(&certificates)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::ICmsDetachedSignature> : produce_base<D, Windows::Security::Cryptography::Certificates::ICmsDetachedSignature>
    {
        int32_t __stdcall get_Certificates(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>>(this->shim().Certificates());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Signers(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::CmsSignerInfo>>(this->shim().Signers());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall VerifySignatureAsync(void* data, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Certificates::SignatureValidationResult>>(this->shim().VerifySignatureAsync(*reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&data)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureFactory> : produce_base<D, Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureFactory>
    {
        int32_t __stdcall CreateCmsDetachedSignature(void* inputBlob, void** cmsSignedData) noexcept final try
        {
            clear_abi(cmsSignedData);
            typename D::abi_guard guard(this->shim());
            *cmsSignedData = detach_from<Windows::Security::Cryptography::Certificates::CmsDetachedSignature>(this->shim().CreateCmsDetachedSignature(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&inputBlob)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureStatics> : produce_base<D, Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureStatics>
    {
        int32_t __stdcall GenerateSignatureAsync(void* data, void* signers, void* certificates, void** outputBlob) noexcept final try
        {
            clear_abi(outputBlob);
            typename D::abi_guard guard(this->shim());
            *outputBlob = detach_from<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>>(this->shim().GenerateSignatureAsync(*reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&data), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::CmsSignerInfo> const*>(&signers), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::Certificate> const*>(&certificates)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::ICmsSignerInfo> : produce_base<D, Windows::Security::Cryptography::Certificates::ICmsSignerInfo>
    {
        int32_t __stdcall get_Certificate(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Certificates::Certificate>(this->shim().Certificate());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Certificate(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Certificate(*reinterpret_cast<Windows::Security::Cryptography::Certificates::Certificate const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HashAlgorithmName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().HashAlgorithmName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_HashAlgorithmName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HashAlgorithmName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TimestampInfo(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Certificates::CmsTimestampInfo>(this->shim().TimestampInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::ICmsTimestampInfo> : produce_base<D, Windows::Security::Cryptography::Certificates::ICmsTimestampInfo>
    {
        int32_t __stdcall get_SigningCertificate(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Certificates::Certificate>(this->shim().SigningCertificate());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Certificates(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>>(this->shim().Certificates());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Timestamp(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().Timestamp());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics> : produce_base<D, Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics>
    {
        int32_t __stdcall get_Rsa(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Rsa());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Dsa(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Dsa());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Ecdh256(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Ecdh256());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Ecdh384(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Ecdh384());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Ecdh521(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Ecdh521());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Ecdsa256(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Ecdsa256());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Ecdsa384(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Ecdsa384());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Ecdsa521(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Ecdsa521());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics2> : produce_base<D, Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics2>
    {
        int32_t __stdcall get_Ecdsa(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Ecdsa());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Ecdh(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Ecdh());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics> : produce_base<D, Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics>
    {
        int32_t __stdcall DecryptTpmAttestationCredentialAsync(void* credential, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().DecryptTpmAttestationCredentialAsync(*reinterpret_cast<hstring const*>(&credential)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetTpmAttestationCredentialId(void* credential, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().GetTpmAttestationCredentialId(*reinterpret_cast<hstring const*>(&credential)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics2> : produce_base<D, Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics2>
    {
        int32_t __stdcall DecryptTpmAttestationCredentialWithContainerNameAsync(void* credential, void* containerName, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().DecryptTpmAttestationCredentialAsync(*reinterpret_cast<hstring const*>(&credential), *reinterpret_cast<hstring const*>(&containerName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics> : produce_base<D, Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics>
    {
        int32_t __stdcall get_SoftwareKeyStorageProvider(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SoftwareKeyStorageProvider());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SmartcardKeyStorageProvider(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SmartcardKeyStorageProvider());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PlatformKeyStorageProvider(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PlatformKeyStorageProvider());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics2> : produce_base<D, Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics2>
    {
        int32_t __stdcall get_PassportKeyStorageProvider(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PassportKeyStorageProvider());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::IPfxImportParameters> : produce_base<D, Windows::Security::Cryptography::Certificates::IPfxImportParameters>
    {
        int32_t __stdcall get_Exportable(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Certificates::ExportOption>(this->shim().Exportable());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Exportable(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Exportable(*reinterpret_cast<Windows::Security::Cryptography::Certificates::ExportOption const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_KeyProtectionLevel(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Certificates::KeyProtectionLevel>(this->shim().KeyProtectionLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_KeyProtectionLevel(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyProtectionLevel(*reinterpret_cast<Windows::Security::Cryptography::Certificates::KeyProtectionLevel const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InstallOptions(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Certificates::InstallOptions>(this->shim().InstallOptions());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_InstallOptions(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InstallOptions(*reinterpret_cast<Windows::Security::Cryptography::Certificates::InstallOptions const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FriendlyName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FriendlyName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_FriendlyName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FriendlyName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_KeyStorageProviderName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().KeyStorageProviderName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_KeyStorageProviderName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyStorageProviderName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ContainerNamePrefix(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ContainerNamePrefix());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ContainerNamePrefix(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContainerNamePrefix(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ReaderName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ReaderName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ReaderName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReaderName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::IStandardCertificateStoreNamesStatics> : produce_base<D, Windows::Security::Cryptography::Certificates::IStandardCertificateStoreNamesStatics>
    {
        int32_t __stdcall get_Personal(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Personal());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TrustedRootCertificationAuthorities(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TrustedRootCertificationAuthorities());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IntermediateCertificationAuthorities(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().IntermediateCertificationAuthorities());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo> : produce_base<D, Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo>
    {
        int32_t __stdcall get_EmailName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().EmailName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IPAddress(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().IPAddress());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Url(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().Url());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DnsName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().DnsName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DistinguishedName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().DistinguishedName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PrincipalName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().PrincipalName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2> : produce_base<D, Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2>
    {
        int32_t __stdcall get_EmailNames(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().EmailNames());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IPAddresses(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().IPAddresses());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Urls(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().Urls());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DnsNames(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().DnsNames());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DistinguishedNames(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().DistinguishedNames());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PrincipalNames(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().PrincipalNames());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Extension(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Certificates::CertificateExtension>(this->shim().Extension());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager> : produce_base<D, Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager>
    {
        int32_t __stdcall CreateRequestAsync(void* request, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().CreateRequestAsync(*reinterpret_cast<Windows::Security::Cryptography::Certificates::CertificateRequestProperties const*>(&request)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall InstallCertificateAsync(void* certificate, uint32_t installOption, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncAction>(this->shim().InstallCertificateAsync(*reinterpret_cast<hstring const*>(&certificate), *reinterpret_cast<Windows::Security::Cryptography::Certificates::InstallOptions const*>(&installOption)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ImportPfxDataAsync(void* pfxData, void* password, int32_t exportable, int32_t keyProtectionLevel, uint32_t installOption, void* friendlyName, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ImportPfxDataAsync(*reinterpret_cast<hstring const*>(&pfxData), *reinterpret_cast<hstring const*>(&password), *reinterpret_cast<Windows::Security::Cryptography::Certificates::ExportOption const*>(&exportable), *reinterpret_cast<Windows::Security::Cryptography::Certificates::KeyProtectionLevel const*>(&keyProtectionLevel), *reinterpret_cast<Windows::Security::Cryptography::Certificates::InstallOptions const*>(&installOption), *reinterpret_cast<hstring const*>(&friendlyName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ImportPfxDataToKspAsync(void* pfxData, void* password, int32_t exportable, int32_t keyProtectionLevel, uint32_t installOption, void* friendlyName, void* keyStorageProvider, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ImportPfxDataAsync(*reinterpret_cast<hstring const*>(&pfxData), *reinterpret_cast<hstring const*>(&password), *reinterpret_cast<Windows::Security::Cryptography::Certificates::ExportOption const*>(&exportable), *reinterpret_cast<Windows::Security::Cryptography::Certificates::KeyProtectionLevel const*>(&keyProtectionLevel), *reinterpret_cast<Windows::Security::Cryptography::Certificates::InstallOptions const*>(&installOption), *reinterpret_cast<hstring const*>(&friendlyName), *reinterpret_cast<hstring const*>(&keyStorageProvider)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager2> : produce_base<D, Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager2>
    {
        int32_t __stdcall ImportPfxDataToKspWithParametersAsync(void* pfxData, void* password, void* pfxImportParameters, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ImportPfxDataAsync(*reinterpret_cast<hstring const*>(&pfxData), *reinterpret_cast<hstring const*>(&password), *reinterpret_cast<Windows::Security::Cryptography::Certificates::PfxImportParameters const*>(&pfxImportParameters)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Security::Cryptography::Certificates::IUserCertificateStore> : produce_base<D, Windows::Security::Cryptography::Certificates::IUserCertificateStore>
    {
        int32_t __stdcall RequestAddAsync(void* certificate, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().RequestAddAsync(*reinterpret_cast<Windows::Security::Cryptography::Certificates::Certificate const*>(&certificate)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestDeleteAsync(void* certificate, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().RequestDeleteAsync(*reinterpret_cast<Windows::Security::Cryptography::Certificates::Certificate const*>(&certificate)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Name(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Security::Cryptography::Certificates
{
    constexpr auto operator|(EnrollKeyUsages const left, EnrollKeyUsages const right) noexcept
    {
        return static_cast<EnrollKeyUsages>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(EnrollKeyUsages& left, EnrollKeyUsages const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(EnrollKeyUsages const left, EnrollKeyUsages const right) noexcept
    {
        return static_cast<EnrollKeyUsages>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(EnrollKeyUsages& left, EnrollKeyUsages const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(EnrollKeyUsages const value) noexcept
    {
        return static_cast<EnrollKeyUsages>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(EnrollKeyUsages const left, EnrollKeyUsages const right) noexcept
    {
        return static_cast<EnrollKeyUsages>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(EnrollKeyUsages& left, EnrollKeyUsages const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    constexpr auto operator|(InstallOptions const left, InstallOptions const right) noexcept
    {
        return static_cast<InstallOptions>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(InstallOptions& left, InstallOptions const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(InstallOptions const left, InstallOptions const right) noexcept
    {
        return static_cast<InstallOptions>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(InstallOptions& left, InstallOptions const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(InstallOptions const value) noexcept
    {
        return static_cast<InstallOptions>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(InstallOptions const left, InstallOptions const right) noexcept
    {
        return static_cast<InstallOptions>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(InstallOptions& left, InstallOptions const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    inline Certificate::Certificate(Windows::Storage::Streams::IBuffer const& certBlob) :
        Certificate(impl::call_factory<Certificate, ICertificateFactory>([&](ICertificateFactory const& f) { return f.CreateCertificate(certBlob); }))
    {
    }
    inline auto CertificateEnrollmentManager::CreateRequestAsync(Windows::Security::Cryptography::Certificates::CertificateRequestProperties const& request)
    {
        return impl::call_factory<CertificateEnrollmentManager, ICertificateEnrollmentManagerStatics>([&](ICertificateEnrollmentManagerStatics const& f) { return f.CreateRequestAsync(request); });
    }
    inline auto CertificateEnrollmentManager::InstallCertificateAsync(param::hstring const& certificate, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption)
    {
        return impl::call_factory<CertificateEnrollmentManager, ICertificateEnrollmentManagerStatics>([&](ICertificateEnrollmentManagerStatics const& f) { return f.InstallCertificateAsync(certificate, installOption); });
    }
    inline auto CertificateEnrollmentManager::ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::ExportOption const& exportable, Windows::Security::Cryptography::Certificates::KeyProtectionLevel const& keyProtectionLevel, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption, param::hstring const& friendlyName)
    {
        return impl::call_factory<CertificateEnrollmentManager, ICertificateEnrollmentManagerStatics>([&](ICertificateEnrollmentManagerStatics const& f) { return f.ImportPfxDataAsync(pfxData, password, exportable, keyProtectionLevel, installOption, friendlyName); });
    }
    inline auto CertificateEnrollmentManager::UserCertificateEnrollmentManager()
    {
        return impl::call_factory_cast<Windows::Security::Cryptography::Certificates::UserCertificateEnrollmentManager(*)(ICertificateEnrollmentManagerStatics2 const&), CertificateEnrollmentManager, ICertificateEnrollmentManagerStatics2>([](ICertificateEnrollmentManagerStatics2 const& f) { return f.UserCertificateEnrollmentManager(); });
    }
    inline auto CertificateEnrollmentManager::ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::ExportOption const& exportable, Windows::Security::Cryptography::Certificates::KeyProtectionLevel const& keyProtectionLevel, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption, param::hstring const& friendlyName, param::hstring const& keyStorageProvider)
    {
        return impl::call_factory<CertificateEnrollmentManager, ICertificateEnrollmentManagerStatics2>([&](ICertificateEnrollmentManagerStatics2 const& f) { return f.ImportPfxDataAsync(pfxData, password, exportable, keyProtectionLevel, installOption, friendlyName, keyStorageProvider); });
    }
    inline auto CertificateEnrollmentManager::ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::PfxImportParameters const& pfxImportParameters)
    {
        return impl::call_factory<CertificateEnrollmentManager, ICertificateEnrollmentManagerStatics3>([&](ICertificateEnrollmentManagerStatics3 const& f) { return f.ImportPfxDataAsync(pfxData, password, pfxImportParameters); });
    }
    inline CertificateExtension::CertificateExtension() :
        CertificateExtension(impl::call_factory_cast<CertificateExtension(*)(Windows::Foundation::IActivationFactory const&), CertificateExtension>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<CertificateExtension>(); }))
    {
    }
    inline CertificateKeyUsages::CertificateKeyUsages() :
        CertificateKeyUsages(impl::call_factory_cast<CertificateKeyUsages(*)(Windows::Foundation::IActivationFactory const&), CertificateKeyUsages>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<CertificateKeyUsages>(); }))
    {
    }
    inline CertificateQuery::CertificateQuery() :
        CertificateQuery(impl::call_factory_cast<CertificateQuery(*)(Windows::Foundation::IActivationFactory const&), CertificateQuery>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<CertificateQuery>(); }))
    {
    }
    inline CertificateRequestProperties::CertificateRequestProperties() :
        CertificateRequestProperties(impl::call_factory_cast<CertificateRequestProperties(*)(Windows::Foundation::IActivationFactory const&), CertificateRequestProperties>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<CertificateRequestProperties>(); }))
    {
    }
    inline auto CertificateStores::FindAllAsync()
    {
        return impl::call_factory_cast<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>>(*)(ICertificateStoresStatics const&), CertificateStores, ICertificateStoresStatics>([](ICertificateStoresStatics const& f) { return f.FindAllAsync(); });
    }
    inline auto CertificateStores::FindAllAsync(Windows::Security::Cryptography::Certificates::CertificateQuery const& query)
    {
        return impl::call_factory<CertificateStores, ICertificateStoresStatics>([&](ICertificateStoresStatics const& f) { return f.FindAllAsync(query); });
    }
    inline auto CertificateStores::TrustedRootCertificationAuthorities()
    {
        return impl::call_factory_cast<Windows::Security::Cryptography::Certificates::CertificateStore(*)(ICertificateStoresStatics const&), CertificateStores, ICertificateStoresStatics>([](ICertificateStoresStatics const& f) { return f.TrustedRootCertificationAuthorities(); });
    }
    inline auto CertificateStores::IntermediateCertificationAuthorities()
    {
        return impl::call_factory_cast<Windows::Security::Cryptography::Certificates::CertificateStore(*)(ICertificateStoresStatics const&), CertificateStores, ICertificateStoresStatics>([](ICertificateStoresStatics const& f) { return f.IntermediateCertificationAuthorities(); });
    }
    inline auto CertificateStores::GetStoreByName(param::hstring const& storeName)
    {
        return impl::call_factory<CertificateStores, ICertificateStoresStatics>([&](ICertificateStoresStatics const& f) { return f.GetStoreByName(storeName); });
    }
    inline auto CertificateStores::GetUserStoreByName(param::hstring const& storeName)
    {
        return impl::call_factory<CertificateStores, ICertificateStoresStatics2>([&](ICertificateStoresStatics2 const& f) { return f.GetUserStoreByName(storeName); });
    }
    inline ChainBuildingParameters::ChainBuildingParameters() :
        ChainBuildingParameters(impl::call_factory_cast<ChainBuildingParameters(*)(Windows::Foundation::IActivationFactory const&), ChainBuildingParameters>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<ChainBuildingParameters>(); }))
    {
    }
    inline ChainValidationParameters::ChainValidationParameters() :
        ChainValidationParameters(impl::call_factory_cast<ChainValidationParameters(*)(Windows::Foundation::IActivationFactory const&), ChainValidationParameters>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<ChainValidationParameters>(); }))
    {
    }
    inline CmsAttachedSignature::CmsAttachedSignature(Windows::Storage::Streams::IBuffer const& inputBlob) :
        CmsAttachedSignature(impl::call_factory<CmsAttachedSignature, ICmsAttachedSignatureFactory>([&](ICmsAttachedSignatureFactory const& f) { return f.CreateCmsAttachedSignature(inputBlob); }))
    {
    }
    inline auto CmsAttachedSignature::GenerateSignatureAsync(Windows::Storage::Streams::IBuffer const& data, param::async_iterable<Windows::Security::Cryptography::Certificates::CmsSignerInfo> const& signers, param::async_iterable<Windows::Security::Cryptography::Certificates::Certificate> const& certificates)
    {
        return impl::call_factory<CmsAttachedSignature, ICmsAttachedSignatureStatics>([&](ICmsAttachedSignatureStatics const& f) { return f.GenerateSignatureAsync(data, signers, certificates); });
    }
    inline CmsDetachedSignature::CmsDetachedSignature(Windows::Storage::Streams::IBuffer const& inputBlob) :
        CmsDetachedSignature(impl::call_factory<CmsDetachedSignature, ICmsDetachedSignatureFactory>([&](ICmsDetachedSignatureFactory const& f) { return f.CreateCmsDetachedSignature(inputBlob); }))
    {
    }
    inline auto CmsDetachedSignature::GenerateSignatureAsync(Windows::Storage::Streams::IInputStream const& data, param::async_iterable<Windows::Security::Cryptography::Certificates::CmsSignerInfo> const& signers, param::async_iterable<Windows::Security::Cryptography::Certificates::Certificate> const& certificates)
    {
        return impl::call_factory<CmsDetachedSignature, ICmsDetachedSignatureStatics>([&](ICmsDetachedSignatureStatics const& f) { return f.GenerateSignatureAsync(data, signers, certificates); });
    }
    inline CmsSignerInfo::CmsSignerInfo() :
        CmsSignerInfo(impl::call_factory_cast<CmsSignerInfo(*)(Windows::Foundation::IActivationFactory const&), CmsSignerInfo>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<CmsSignerInfo>(); }))
    {
    }
    inline auto KeyAlgorithmNames::Rsa()
    {
        return impl::call_factory_cast<hstring(*)(IKeyAlgorithmNamesStatics const&), KeyAlgorithmNames, IKeyAlgorithmNamesStatics>([](IKeyAlgorithmNamesStatics const& f) { return f.Rsa(); });
    }
    inline auto KeyAlgorithmNames::Dsa()
    {
        return impl::call_factory_cast<hstring(*)(IKeyAlgorithmNamesStatics const&), KeyAlgorithmNames, IKeyAlgorithmNamesStatics>([](IKeyAlgorithmNamesStatics const& f) { return f.Dsa(); });
    }
    inline auto KeyAlgorithmNames::Ecdh256()
    {
        return impl::call_factory_cast<hstring(*)(IKeyAlgorithmNamesStatics const&), KeyAlgorithmNames, IKeyAlgorithmNamesStatics>([](IKeyAlgorithmNamesStatics const& f) { return f.Ecdh256(); });
    }
    inline auto KeyAlgorithmNames::Ecdh384()
    {
        return impl::call_factory_cast<hstring(*)(IKeyAlgorithmNamesStatics const&), KeyAlgorithmNames, IKeyAlgorithmNamesStatics>([](IKeyAlgorithmNamesStatics const& f) { return f.Ecdh384(); });
    }
    inline auto KeyAlgorithmNames::Ecdh521()
    {
        return impl::call_factory_cast<hstring(*)(IKeyAlgorithmNamesStatics const&), KeyAlgorithmNames, IKeyAlgorithmNamesStatics>([](IKeyAlgorithmNamesStatics const& f) { return f.Ecdh521(); });
    }
    inline auto KeyAlgorithmNames::Ecdsa256()
    {
        return impl::call_factory_cast<hstring(*)(IKeyAlgorithmNamesStatics const&), KeyAlgorithmNames, IKeyAlgorithmNamesStatics>([](IKeyAlgorithmNamesStatics const& f) { return f.Ecdsa256(); });
    }
    inline auto KeyAlgorithmNames::Ecdsa384()
    {
        return impl::call_factory_cast<hstring(*)(IKeyAlgorithmNamesStatics const&), KeyAlgorithmNames, IKeyAlgorithmNamesStatics>([](IKeyAlgorithmNamesStatics const& f) { return f.Ecdsa384(); });
    }
    inline auto KeyAlgorithmNames::Ecdsa521()
    {
        return impl::call_factory_cast<hstring(*)(IKeyAlgorithmNamesStatics const&), KeyAlgorithmNames, IKeyAlgorithmNamesStatics>([](IKeyAlgorithmNamesStatics const& f) { return f.Ecdsa521(); });
    }
    inline auto KeyAlgorithmNames::Ecdsa()
    {
        return impl::call_factory_cast<hstring(*)(IKeyAlgorithmNamesStatics2 const&), KeyAlgorithmNames, IKeyAlgorithmNamesStatics2>([](IKeyAlgorithmNamesStatics2 const& f) { return f.Ecdsa(); });
    }
    inline auto KeyAlgorithmNames::Ecdh()
    {
        return impl::call_factory_cast<hstring(*)(IKeyAlgorithmNamesStatics2 const&), KeyAlgorithmNames, IKeyAlgorithmNamesStatics2>([](IKeyAlgorithmNamesStatics2 const& f) { return f.Ecdh(); });
    }
    inline auto KeyAttestationHelper::DecryptTpmAttestationCredentialAsync(param::hstring const& credential)
    {
        return impl::call_factory<KeyAttestationHelper, IKeyAttestationHelperStatics>([&](IKeyAttestationHelperStatics const& f) { return f.DecryptTpmAttestationCredentialAsync(credential); });
    }
    inline auto KeyAttestationHelper::GetTpmAttestationCredentialId(param::hstring const& credential)
    {
        return impl::call_factory<KeyAttestationHelper, IKeyAttestationHelperStatics>([&](IKeyAttestationHelperStatics const& f) { return f.GetTpmAttestationCredentialId(credential); });
    }
    inline auto KeyAttestationHelper::DecryptTpmAttestationCredentialAsync(param::hstring const& credential, param::hstring const& containerName)
    {
        return impl::call_factory<KeyAttestationHelper, IKeyAttestationHelperStatics2>([&](IKeyAttestationHelperStatics2 const& f) { return f.DecryptTpmAttestationCredentialAsync(credential, containerName); });
    }
    inline auto KeyStorageProviderNames::SoftwareKeyStorageProvider()
    {
        return impl::call_factory_cast<hstring(*)(IKeyStorageProviderNamesStatics const&), KeyStorageProviderNames, IKeyStorageProviderNamesStatics>([](IKeyStorageProviderNamesStatics const& f) { return f.SoftwareKeyStorageProvider(); });
    }
    inline auto KeyStorageProviderNames::SmartcardKeyStorageProvider()
    {
        return impl::call_factory_cast<hstring(*)(IKeyStorageProviderNamesStatics const&), KeyStorageProviderNames, IKeyStorageProviderNamesStatics>([](IKeyStorageProviderNamesStatics const& f) { return f.SmartcardKeyStorageProvider(); });
    }
    inline auto KeyStorageProviderNames::PlatformKeyStorageProvider()
    {
        return impl::call_factory_cast<hstring(*)(IKeyStorageProviderNamesStatics const&), KeyStorageProviderNames, IKeyStorageProviderNamesStatics>([](IKeyStorageProviderNamesStatics const& f) { return f.PlatformKeyStorageProvider(); });
    }
    inline auto KeyStorageProviderNames::PassportKeyStorageProvider()
    {
        return impl::call_factory_cast<hstring(*)(IKeyStorageProviderNamesStatics2 const&), KeyStorageProviderNames, IKeyStorageProviderNamesStatics2>([](IKeyStorageProviderNamesStatics2 const& f) { return f.PassportKeyStorageProvider(); });
    }
    inline PfxImportParameters::PfxImportParameters() :
        PfxImportParameters(impl::call_factory_cast<PfxImportParameters(*)(Windows::Foundation::IActivationFactory const&), PfxImportParameters>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<PfxImportParameters>(); }))
    {
    }
    inline auto StandardCertificateStoreNames::Personal()
    {
        return impl::call_factory_cast<hstring(*)(IStandardCertificateStoreNamesStatics const&), StandardCertificateStoreNames, IStandardCertificateStoreNamesStatics>([](IStandardCertificateStoreNamesStatics const& f) { return f.Personal(); });
    }
    inline auto StandardCertificateStoreNames::TrustedRootCertificationAuthorities()
    {
        return impl::call_factory_cast<hstring(*)(IStandardCertificateStoreNamesStatics const&), StandardCertificateStoreNames, IStandardCertificateStoreNamesStatics>([](IStandardCertificateStoreNamesStatics const& f) { return f.TrustedRootCertificationAuthorities(); });
    }
    inline auto StandardCertificateStoreNames::IntermediateCertificationAuthorities()
    {
        return impl::call_factory_cast<hstring(*)(IStandardCertificateStoreNamesStatics const&), StandardCertificateStoreNames, IStandardCertificateStoreNamesStatics>([](IStandardCertificateStoreNamesStatics const& f) { return f.IntermediateCertificationAuthorities(); });
    }
    inline SubjectAlternativeNameInfo::SubjectAlternativeNameInfo() :
        SubjectAlternativeNameInfo(impl::call_factory_cast<SubjectAlternativeNameInfo(*)(Windows::Foundation::IActivationFactory const&), SubjectAlternativeNameInfo>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<SubjectAlternativeNameInfo>(); }))
    {
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificate> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificate2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificate3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateChain> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateExtension> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateKeyUsages> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateQuery> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateQuery2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateRequestProperties> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateRequestProperties4> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateStore> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateStore2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateStoresStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateStoresStatics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IChainBuildingParameters> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IChainValidationParameters> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICmsAttachedSignature> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICmsDetachedSignature> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICmsSignerInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICmsTimestampInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IPfxImportParameters> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IStandardCertificateStoreNamesStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IUserCertificateStore> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::Certificate> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::CertificateChain> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::CertificateEnrollmentManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::CertificateExtension> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::CertificateKeyUsages> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::CertificateQuery> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::CertificateRequestProperties> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::CertificateStore> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::CertificateStores> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ChainBuildingParameters> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ChainValidationParameters> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::CmsAttachedSignature> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::CmsDetachedSignature> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::CmsSignerInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::CmsTimestampInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::KeyAlgorithmNames> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::KeyAttestationHelper> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::KeyStorageProviderNames> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::PfxImportParameters> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::StandardCertificateStoreNames> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::SubjectAlternativeNameInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::UserCertificateEnrollmentManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::UserCertificateStore> : winrt::impl::hash_base {};
#endif
}
#endif
