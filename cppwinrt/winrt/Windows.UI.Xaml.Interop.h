// C++/WinRT v2.0.200213.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Interop_H
#define WINRT_Windows_UI_Xaml_Interop_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.200213.5"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.UI.Xaml.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.UI.Xaml.Interop.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Interop::IBindableIterator) consume_Windows_UI_Xaml_Interop_IBindableIterable<D>::First() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Interop::IBindableIterable)->First(&result));
        return Windows::UI::Xaml::Interop::IBindableIterator{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) consume_Windows_UI_Xaml_Interop_IBindableIterator<D>::Current() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Interop::IBindableIterator)->get_Current(&value));
        return Windows::Foundation::IInspectable{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_UI_Xaml_Interop_IBindableIterator<D>::HasCurrent() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Interop::IBindableIterator)->get_HasCurrent(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_UI_Xaml_Interop_IBindableIterator<D>::MoveNext() const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Interop::IBindableIterator)->MoveNext(&result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_UI_Xaml_Interop_IBindableObservableVector<D>::VectorChanged(Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Interop::IBindableObservableVector)->add_VectorChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Interop_IBindableObservableVector<D>::VectorChanged_revoker consume_Windows_UI_Xaml_Interop_IBindableObservableVector<D>::VectorChanged(auto_revoke_t, Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler const& handler) const
    {
        return impl::make_event_revoker<D, VectorChanged_revoker>(this, VectorChanged(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Interop_IBindableObservableVector<D>::VectorChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Xaml::Interop::IBindableObservableVector)->remove_VectorChanged(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) consume_Windows_UI_Xaml_Interop_IBindableVector<D>::GetAt(uint32_t index) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Interop::IBindableVector)->GetAt(index, &result));
        return Windows::Foundation::IInspectable{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_UI_Xaml_Interop_IBindableVector<D>::Size() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Interop::IBindableVector)->get_Size(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Interop::IBindableVectorView) consume_Windows_UI_Xaml_Interop_IBindableVector<D>::GetView() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Interop::IBindableVector)->GetView(&result));
        return Windows::UI::Xaml::Interop::IBindableVectorView{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_UI_Xaml_Interop_IBindableVector<D>::IndexOf(Windows::Foundation::IInspectable const& value, uint32_t& index) const
    {
        bool returnValue{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Interop::IBindableVector)->IndexOf(*(void**)(&value), &index, &returnValue));
        return returnValue;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Interop_IBindableVector<D>::SetAt(uint32_t index, Windows::Foundation::IInspectable const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Interop::IBindableVector)->SetAt(index, *(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Interop_IBindableVector<D>::InsertAt(uint32_t index, Windows::Foundation::IInspectable const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Interop::IBindableVector)->InsertAt(index, *(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Interop_IBindableVector<D>::RemoveAt(uint32_t index) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Interop::IBindableVector)->RemoveAt(index));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Interop_IBindableVector<D>::Append(Windows::Foundation::IInspectable const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Interop::IBindableVector)->Append(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Interop_IBindableVector<D>::RemoveAtEnd() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Interop::IBindableVector)->RemoveAtEnd());
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Interop_IBindableVector<D>::Clear() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Interop::IBindableVector)->Clear());
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) consume_Windows_UI_Xaml_Interop_IBindableVectorView<D>::GetAt(uint32_t index) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Interop::IBindableVectorView)->GetAt(index, &result));
        return Windows::Foundation::IInspectable{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_UI_Xaml_Interop_IBindableVectorView<D>::Size() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Interop::IBindableVectorView)->get_Size(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_UI_Xaml_Interop_IBindableVectorView<D>::IndexOf(Windows::Foundation::IInspectable const& value, uint32_t& index) const
    {
        bool returnValue{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Interop::IBindableVectorView)->IndexOf(*(void**)(&value), &index, &returnValue));
        return returnValue;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_UI_Xaml_Interop_INotifyCollectionChanged<D>::CollectionChanged(Windows::UI::Xaml::Interop::NotifyCollectionChangedEventHandler const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Interop::INotifyCollectionChanged)->add_CollectionChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Interop_INotifyCollectionChanged<D>::CollectionChanged_revoker consume_Windows_UI_Xaml_Interop_INotifyCollectionChanged<D>::CollectionChanged(auto_revoke_t, Windows::UI::Xaml::Interop::NotifyCollectionChangedEventHandler const& handler) const
    {
        return impl::make_event_revoker<D, CollectionChanged_revoker>(this, CollectionChanged(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Interop_INotifyCollectionChanged<D>::CollectionChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Xaml::Interop::INotifyCollectionChanged)->remove_CollectionChanged(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Interop::NotifyCollectionChangedAction) consume_Windows_UI_Xaml_Interop_INotifyCollectionChangedEventArgs<D>::Action() const
    {
        Windows::UI::Xaml::Interop::NotifyCollectionChangedAction value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs)->get_Action(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Interop::IBindableVector) consume_Windows_UI_Xaml_Interop_INotifyCollectionChangedEventArgs<D>::NewItems() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs)->get_NewItems(&value));
        return Windows::UI::Xaml::Interop::IBindableVector{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Interop::IBindableVector) consume_Windows_UI_Xaml_Interop_INotifyCollectionChangedEventArgs<D>::OldItems() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs)->get_OldItems(&value));
        return Windows::UI::Xaml::Interop::IBindableVector{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_UI_Xaml_Interop_INotifyCollectionChangedEventArgs<D>::NewStartingIndex() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs)->get_NewStartingIndex(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_UI_Xaml_Interop_INotifyCollectionChangedEventArgs<D>::OldStartingIndex() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs)->get_OldStartingIndex(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Interop::NotifyCollectionChangedEventArgs) consume_Windows_UI_Xaml_Interop_INotifyCollectionChangedEventArgsFactory<D>::CreateInstanceWithAllParameters(Windows::UI::Xaml::Interop::NotifyCollectionChangedAction const& action, Windows::UI::Xaml::Interop::IBindableVector const& newItems, Windows::UI::Xaml::Interop::IBindableVector const& oldItems, int32_t newIndex, int32_t oldIndex, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgsFactory)->CreateInstanceWithAllParameters(static_cast<int32_t>(action), *(void**)(&newItems), *(void**)(&oldItems), newIndex, oldIndex, *(void**)(&baseInterface), impl::bind_out(innerInterface), &value));
        return Windows::UI::Xaml::Interop::NotifyCollectionChangedEventArgs{ value, take_ownership_from_abi };
    }
    template <typename H> struct delegate<Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler, H> final : implements_delegate<Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler, H>
    {
        delegate(H&& handler) : implements_delegate<Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(void* vector, void* e) noexcept final try
        {
            (*this)(*reinterpret_cast<Windows::UI::Xaml::Interop::IBindableObservableVector const*>(&vector), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&e));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename H> struct delegate<Windows::UI::Xaml::Interop::NotifyCollectionChangedEventHandler, H> final : implements_delegate<Windows::UI::Xaml::Interop::NotifyCollectionChangedEventHandler, H>
    {
        delegate(H&& handler) : implements_delegate<Windows::UI::Xaml::Interop::NotifyCollectionChangedEventHandler, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(void* sender, void* e) noexcept final try
        {
            (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::Interop::NotifyCollectionChangedEventArgs const*>(&e));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Interop::IBindableIterable> : produce_base<D, Windows::UI::Xaml::Interop::IBindableIterable>
    {
        int32_t __stdcall First(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::Interop::IBindableIterator>(this->shim().First());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Interop::IBindableIterator> : produce_base<D, Windows::UI::Xaml::Interop::IBindableIterator>
    {
        int32_t __stdcall get_Current(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().Current());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HasCurrent(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasCurrent());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall MoveNext(bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().MoveNext());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Interop::IBindableObservableVector> : produce_base<D, Windows::UI::Xaml::Interop::IBindableObservableVector>
    {
        int32_t __stdcall add_VectorChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().VectorChanged(*reinterpret_cast<Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_VectorChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VectorChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Interop::IBindableVector> : produce_base<D, Windows::UI::Xaml::Interop::IBindableVector>
    {
        int32_t __stdcall GetAt(uint32_t index, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IInspectable>(this->shim().GetAt(index));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Size(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Size());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetView(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::Interop::IBindableVectorView>(this->shim().GetView());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IndexOf(void* value, uint32_t* index, bool* returnValue) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().IndexOf(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value), *index));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetAt(uint32_t index, void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetAt(index, *reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall InsertAt(uint32_t index, void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertAt(index, *reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RemoveAt(uint32_t index) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveAt(index);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Append(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Append(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RemoveAtEnd() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveAtEnd();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Clear() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Clear();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Interop::IBindableVectorView> : produce_base<D, Windows::UI::Xaml::Interop::IBindableVectorView>
    {
        int32_t __stdcall GetAt(uint32_t index, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IInspectable>(this->shim().GetAt(index));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Size(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Size());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IndexOf(void* value, uint32_t* index, bool* returnValue) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().IndexOf(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value), *index));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Interop::INotifyCollectionChanged> : produce_base<D, Windows::UI::Xaml::Interop::INotifyCollectionChanged>
    {
        int32_t __stdcall add_CollectionChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().CollectionChanged(*reinterpret_cast<Windows::UI::Xaml::Interop::NotifyCollectionChangedEventHandler const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_CollectionChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CollectionChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs> : produce_base<D, Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs>
    {
        int32_t __stdcall get_Action(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Interop::NotifyCollectionChangedAction>(this->shim().Action());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NewItems(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Interop::IBindableVector>(this->shim().NewItems());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OldItems(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Interop::IBindableVector>(this->shim().OldItems());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NewStartingIndex(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().NewStartingIndex());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OldStartingIndex(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().OldStartingIndex());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgsFactory> : produce_base<D, Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgsFactory>
    {
        int32_t __stdcall CreateInstanceWithAllParameters(int32_t action, void* newItems, void* oldItems, int32_t newIndex, int32_t oldIndex, void* baseInterface, void** innerInterface, void** value) noexcept final try
        {
            if (innerInterface) *innerInterface = nullptr;
            Windows::Foundation::IInspectable winrt_impl_innerInterface;
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Interop::NotifyCollectionChangedEventArgs>(this->shim().CreateInstanceWithAllParameters(*reinterpret_cast<Windows::UI::Xaml::Interop::NotifyCollectionChangedAction const*>(&action), *reinterpret_cast<Windows::UI::Xaml::Interop::IBindableVector const*>(&newItems), *reinterpret_cast<Windows::UI::Xaml::Interop::IBindableVector const*>(&oldItems), newIndex, oldIndex, *reinterpret_cast<Windows::Foundation::IInspectable const*>(&baseInterface), winrt_impl_innerInterface));
                if (innerInterface) *innerInterface = detach_abi(winrt_impl_innerInterface);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Interop
{
    inline NotifyCollectionChangedEventArgs::NotifyCollectionChangedEventArgs(Windows::UI::Xaml::Interop::NotifyCollectionChangedAction const& action, Windows::UI::Xaml::Interop::IBindableVector const& newItems, Windows::UI::Xaml::Interop::IBindableVector const& oldItems, int32_t newIndex, int32_t oldIndex)
    {
        Windows::Foundation::IInspectable baseInterface, innerInterface;
        *this = impl::call_factory<NotifyCollectionChangedEventArgs, INotifyCollectionChangedEventArgsFactory>([&](INotifyCollectionChangedEventArgsFactory const& f) { return f.CreateInstanceWithAllParameters(action, newItems, oldItems, newIndex, oldIndex, baseInterface, innerInterface); });
    }
    template <typename L> BindableVectorChangedEventHandler::BindableVectorChangedEventHandler(L handler) :
        BindableVectorChangedEventHandler(impl::make_delegate<BindableVectorChangedEventHandler>(std::forward<L>(handler)))
    {
    }
    template <typename F> BindableVectorChangedEventHandler::BindableVectorChangedEventHandler(F* handler) :
        BindableVectorChangedEventHandler([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> BindableVectorChangedEventHandler::BindableVectorChangedEventHandler(O* object, M method) :
        BindableVectorChangedEventHandler([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> BindableVectorChangedEventHandler::BindableVectorChangedEventHandler(com_ptr<O>&& object, M method) :
        BindableVectorChangedEventHandler([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> BindableVectorChangedEventHandler::BindableVectorChangedEventHandler(weak_ref<O>&& object, M method) :
        BindableVectorChangedEventHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto BindableVectorChangedEventHandler::operator()(Windows::UI::Xaml::Interop::IBindableObservableVector const& vector, Windows::Foundation::IInspectable const& e) const
    {
        check_hresult((*(impl::abi_t<BindableVectorChangedEventHandler>**)this)->Invoke(*(void**)(&vector), *(void**)(&e)));
    }
    template <typename L> NotifyCollectionChangedEventHandler::NotifyCollectionChangedEventHandler(L handler) :
        NotifyCollectionChangedEventHandler(impl::make_delegate<NotifyCollectionChangedEventHandler>(std::forward<L>(handler)))
    {
    }
    template <typename F> NotifyCollectionChangedEventHandler::NotifyCollectionChangedEventHandler(F* handler) :
        NotifyCollectionChangedEventHandler([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> NotifyCollectionChangedEventHandler::NotifyCollectionChangedEventHandler(O* object, M method) :
        NotifyCollectionChangedEventHandler([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> NotifyCollectionChangedEventHandler::NotifyCollectionChangedEventHandler(com_ptr<O>&& object, M method) :
        NotifyCollectionChangedEventHandler([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> NotifyCollectionChangedEventHandler::NotifyCollectionChangedEventHandler(weak_ref<O>&& object, M method) :
        NotifyCollectionChangedEventHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto NotifyCollectionChangedEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Interop::NotifyCollectionChangedEventArgs const& e) const
    {
        check_hresult((*(impl::abi_t<NotifyCollectionChangedEventHandler>**)this)->Invoke(*(void**)(&sender), *(void**)(&e)));
    }
    template <typename D, typename... Interfaces>
    struct NotifyCollectionChangedEventArgsT :
        implements<D, Windows::Foundation::IInspectable, composing, Interfaces...>,
        impl::require<D, Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs>,
        impl::base<D, NotifyCollectionChangedEventArgs>
    {
        using composable = NotifyCollectionChangedEventArgs;
    protected:
        NotifyCollectionChangedEventArgsT(Windows::UI::Xaml::Interop::NotifyCollectionChangedAction const& action, Windows::UI::Xaml::Interop::IBindableVector const& newItems, Windows::UI::Xaml::Interop::IBindableVector const& oldItems, int32_t newIndex, int32_t oldIndex)
        {
            impl::call_factory<NotifyCollectionChangedEventArgs, INotifyCollectionChangedEventArgsFactory>([&](INotifyCollectionChangedEventArgsFactory const& f) { [[maybe_unused]] auto winrt_impl_discarded = f.CreateInstanceWithAllParameters(action, newItems, oldItems, newIndex, oldIndex, *this, this->m_inner); });
        }
    };
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::UI::Xaml::Interop::IBindableIterable> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Interop::IBindableIterator> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Interop::IBindableObservableVector> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Interop::IBindableVector> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Interop::IBindableVectorView> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Interop::INotifyCollectionChanged> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgsFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Interop::NotifyCollectionChangedEventArgs> : winrt::impl::hash_base {};
#endif
}

namespace winrt::impl
{
    template <typename T>
    struct xaml_typename_name
    {
        static constexpr std::wstring_view value() noexcept
        {
            return name_of<T>();
        }
    };
    template <>
    struct xaml_typename_name<Windows::Foundation::Point>
    {
        static constexpr std::wstring_view value() noexcept
        {
            return L"Point"sv;
        }
    };
    template <>
    struct xaml_typename_name<Windows::Foundation::Size>
    {
        static constexpr std::wstring_view value() noexcept
        {
            return L"Size"sv;
        }
    };
    template <>
    struct xaml_typename_name<Windows::Foundation::Rect>
    {
        static constexpr std::wstring_view value() noexcept
        {
            return L"Rect"sv;
        }
    };
    template <>
    struct xaml_typename_name<Windows::Foundation::DateTime>
    {
        static constexpr std::wstring_view value() noexcept
        {
            return L"DateTime"sv;
        }
    };
    template <>
    struct xaml_typename_name<Windows::Foundation::TimeSpan>
    {
        static constexpr std::wstring_view value() noexcept
        {
            return L"TimeSpan"sv;
        }
    };

    template <typename T>
    struct xaml_typename_kind
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Metadata;
    };
    template<>
    struct xaml_typename_kind<bool>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<char16_t>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<uint8_t>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<int8_t>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<uint16_t>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<int16_t>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<uint32_t>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<int32_t>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<uint64_t>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<int64_t>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<float>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<double>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<hstring>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<guid>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
}

WINRT_EXPORT namespace winrt
{
    template <typename T>
    inline Windows::UI::Xaml::Interop::TypeName xaml_typename()
    {
        static_assert(impl::has_category_v<T>, "T must be WinRT type.");
        static const Windows::UI::Xaml::Interop::TypeName name{ hstring{ impl::xaml_typename_name<T>::value() }, impl::xaml_typename_kind<T>::value };
        return name;
    }
}
#endif
