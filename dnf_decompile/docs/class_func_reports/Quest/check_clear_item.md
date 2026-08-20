# check_clear_item

`_ZNK5Quest16check_clear_itemEii`

`Quest::check_clear_item(int, int) const`

| 类 | 地址 |
|---|---|
| `Quest` | `0x08353342` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08353342  _ZNK5Quest16check_clear_itemEii
#           Quest::check_clear_item(int, int) const
# range [0x08353342, 0x08353403]
08353342 +0x00:  push   %ebp
08353343 +0x01:  mov    %esp,%ebp
08353345 +0x03:  sub    $0x38,%esp
08353348 +0x06:  mov    0x8(%ebp),%eax
0835334b +0x09:  add    $0x48,%eax
0835334e +0x0c:  mov    %eax,(%esp)
08353351 +0x0f:  call   08390e6e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2090e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2090e
08353356 +0x14:  test   %eax,%eax
08353358 +0x16:  setne  %al
0835335b +0x19:  test   %al,%al
0835335d +0x1b:  je     083533fd <+0xbb>
08353363 +0x21:  lea    -0x24(%ebp),%eax
08353366 +0x24:  mov    %eax,(%esp)
08353369 +0x27:  call   0836de02 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x7dce>  ; global constructors keyed to CServerEvent::m_nExpRate+0x7dce
0835336e +0x2c:  movl   $0x0,-0xc(%ebp)
08353375 +0x33:  jmp    083533e1 <+0x9f>
08353377 +0x35:  mov    -0xc(%ebp),%eax
0835337a +0x38:  mov    0x8(%ebp),%edx
0835337d +0x3b:  add    $0x48,%edx
08353380 +0x3e:  mov    %eax,0x4(%esp)
08353384 +0x42:  mov    %edx,(%esp)
08353387 +0x45:  call   08390e90 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20930>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20930
0835338c +0x4a:  mov    (%eax),%edx
0835338e +0x4c:  mov    %edx,-0x24(%ebp)
08353391 +0x4f:  mov    0x4(%eax),%edx
08353394 +0x52:  mov    %edx,-0x20(%ebp)
08353397 +0x55:  mov    0x8(%eax),%edx
0835339a +0x58:  mov    %edx,-0x1c(%ebp)
0835339d +0x5b:  mov    0xc(%eax),%edx
083533a0 +0x5e:  mov    %edx,-0x18(%ebp)
083533a3 +0x61:  mov    0x10(%eax),%edx
083533a6 +0x64:  mov    %edx,-0x14(%ebp)
083533a9 +0x67:  mov    0x14(%eax),%eax
083533ac +0x6a:  mov    %eax,-0x10(%ebp)
083533af +0x6d:  mov    -0x20(%ebp),%eax
083533b2 +0x70:  cmp    $0xffffffff,%eax
083533b5 +0x73:  jne    083533c6 <+0x84>
083533b7 +0x75:  mov    -0x24(%ebp),%eax
083533ba +0x78:  cmp    0xc(%ebp),%eax
083533bd +0x7b:  jne    083533dd <+0x9b>
083533bf +0x7d:  mov    $0x1,%eax
083533c4 +0x82:  jmp    08353402 <+0xc0>
083533c6 +0x84:  mov    -0x24(%ebp),%eax
083533c9 +0x87:  cmp    0xc(%ebp),%eax
083533cc +0x8a:  jne    083533dd <+0x9b>
083533ce +0x8c:  mov    -0x20(%ebp),%eax
083533d1 +0x8f:  cmp    0x10(%ebp),%eax
083533d4 +0x92:  jne    083533dd <+0x9b>
083533d6 +0x94:  mov    $0x1,%eax
083533db +0x99:  jmp    08353402 <+0xc0>
083533dd +0x9b:  addl   $0x1,-0xc(%ebp)
083533e1 +0x9f:  mov    0x8(%ebp),%eax
083533e4 +0xa2:  add    $0x48,%eax
083533e7 +0xa5:  mov    %eax,(%esp)
083533ea +0xa8:  call   08390e6e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2090e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2090e
083533ef +0xad:  cmp    -0xc(%ebp),%eax
083533f2 +0xb0:  setg   %al
083533f5 +0xb3:  test   %al,%al
083533f7 +0xb5:  jne    08353377 <+0x35>
083533fd +0xbb:  mov    $0x0,%eax
08353402 +0xc0:  leave
08353403 +0xc1:  ret
```

## 反编译 C

```c
// Quest::check_clear_item @ 0x8353342

/* Quest::check_clear_item(int, int) const */

undefined4 __thiscall Quest::check_clear_item(Quest *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  
  iVar1 = std::vector<DungeonClearItem,std::allocator<DungeonClearItem>>::size
                    ((vector<DungeonClearItem,std::allocator<DungeonClearItem>> *)(this + 0x48));
  if (iVar1 != 0) {
    DungeonClearItem::DungeonClearItem((DungeonClearItem *)&local_28);
    local_10 = 0;
    while (iVar1 = std::vector<DungeonClearItem,std::allocator<DungeonClearItem>>::size
                             ((vector<DungeonClearItem,std::allocator<DungeonClearItem>> *)
                              (this + 0x48)), (int)local_10 < iVar1) {
      piVar2 = (int *)std::vector<DungeonClearItem,std::allocator<DungeonClearItem>>::at
                                ((vector<DungeonClearItem,std::allocator<DungeonClearItem>> *)
                                 (this + 0x48),local_10);
      local_28 = *piVar2;
      local_24 = piVar2[1];
      local_20 = piVar2[2];
      local_1c = piVar2[3];
      local_18 = piVar2[4];
      local_14 = piVar2[5];
      if (local_24 == -1) {
        if (local_28 == param_1) {
          return 1;
        }
      }
      else if ((local_28 == param_1) && (local_24 == param_2)) {
        return 1;
      }
      local_10 = local_10 + 1;
    }
  }
  return 0;
}
```
