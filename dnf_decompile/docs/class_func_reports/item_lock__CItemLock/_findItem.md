# _findItem

`_ZN9item_lock9CItemLock9_findItemEh`

`item_lock::CItemLock::_findItem(unsigned char)`

| 类 | 地址 |
|---|---|
| `item_lock::CItemLock` | `0x08542e12` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08542e12  _ZN9item_lock9CItemLock9_findItemEh
#           item_lock::CItemLock::_findItem(unsigned char)
# range [0x08542e12, 0x08542e97]
08542e12 +0x00:  push   %ebp
08542e13 +0x01:  mov    %esp,%ebp
08542e15 +0x03:  sub    $0x38,%esp
08542e18 +0x06:  mov    0xc(%ebp),%eax
08542e1b +0x09:  mov    %al,-0x1c(%ebp)
08542e1e +0x0c:  mov    0x8(%ebp),%eax
08542e21 +0x0f:  lea    0x48(%eax),%edx
08542e24 +0x12:  lea    -0x14(%ebp),%eax
08542e27 +0x15:  mov    %edx,0x4(%esp)
08542e2b +0x19:  mov    %eax,(%esp)
08542e2e +0x1c:  call   0849aae4 <_GLOBAL__I__ZN16CExpandEquipslotC2Ev+0x5c>  ; global constructors keyed to CExpandEquipslot::CExpandEquipslot()+0x5c
08542e33 +0x21:  sub    $0x4,%esp
08542e36 +0x24:  jmp    08542e63 <+0x51>
08542e38 +0x26:  lea    -0x14(%ebp),%eax
08542e3b +0x29:  mov    %eax,(%esp)
08542e3e +0x2c:  call   0849ab8e <_GLOBAL__I__ZN16CExpandEquipslotC2Ev+0x106>  ; global constructors keyed to CExpandEquipslot::CExpandEquipslot()+0x106
08542e43 +0x31:  mov    %eax,-0xc(%ebp)
08542e46 +0x34:  mov    -0xc(%ebp),%eax
08542e49 +0x37:  movzbl (%eax),%eax
08542e4c +0x3a:  cmp    -0x1c(%ebp),%al
08542e4f +0x3d:  jne    08542e58 <+0x46>
08542e51 +0x3f:  mov    $0x1,%eax
08542e56 +0x44:  jmp    08542e96 <+0x84>
08542e58 +0x46:  lea    -0x14(%ebp),%eax
08542e5b +0x49:  mov    %eax,(%esp)
08542e5e +0x4c:  call   085434f4 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x4d6>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x4d6
08542e63 +0x51:  mov    0x8(%ebp),%eax
08542e66 +0x54:  lea    0x48(%eax),%edx
08542e69 +0x57:  lea    -0x10(%ebp),%eax
08542e6c +0x5a:  mov    %edx,0x4(%esp)
08542e70 +0x5e:  mov    %eax,(%esp)
08542e73 +0x61:  call   0849ab08 <_GLOBAL__I__ZN16CExpandEquipslotC2Ev+0x80>  ; global constructors keyed to CExpandEquipslot::CExpandEquipslot()+0x80
08542e78 +0x66:  sub    $0x4,%esp
08542e7b +0x69:  lea    -0x10(%ebp),%eax
08542e7e +0x6c:  mov    %eax,0x4(%esp)
08542e82 +0x70:  lea    -0x14(%ebp),%eax
08542e85 +0x73:  mov    %eax,(%esp)
08542e88 +0x76:  call   0849ab2e <_GLOBAL__I__ZN16CExpandEquipslotC2Ev+0xa6>  ; global constructors keyed to CExpandEquipslot::CExpandEquipslot()+0xa6
08542e8d +0x7b:  test   %al,%al
08542e8f +0x7d:  jne    08542e38 <+0x26>
08542e91 +0x7f:  mov    $0x0,%eax
08542e96 +0x84:  leave
08542e97 +0x85:  ret
```

## 反编译 C

```c
// item_lock::CItemLock::_findItem @ 0x8542e12

/* item_lock::CItemLock::_findItem(unsigned char) */

undefined4 __thiscall item_lock::CItemLock::_findItem(CItemLock *this,uchar param_1)

{
  bool bVar1;
  __normal_iterator<item_lock::stItemLockRef*,std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>>
  local_18 [4];
  __normal_iterator local_14 [4];
  uchar *local_10;
  
  std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>::begin();
  while( true ) {
    std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>::end();
    bVar1 = __gnu_cxx::operator!=(local_18,local_14);
    if (!bVar1) {
      return 0;
    }
    local_10 = (uchar *)__gnu_cxx::
                        __normal_iterator<item_lock::stItemLockRef*,std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>>
                        ::operator*(local_18);
    if (*local_10 == param_1) break;
    __gnu_cxx::
    __normal_iterator<item_lock::stItemLockRef*,std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>>
    ::operator++(local_18);
  }
  return 1;
}
```
