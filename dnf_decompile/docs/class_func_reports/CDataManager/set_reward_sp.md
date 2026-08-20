# set_reward_sp

`_ZN12CDataManager13set_reward_spEv`

`CDataManager::set_reward_sp()`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08360bde` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08360bde  _ZN12CDataManager13set_reward_spEv
#           CDataManager::set_reward_sp()
# range [0x08360bde, 0x08360cb7]
08360bde +0x00:  push   %ebp
08360bdf +0x01:  mov    %esp,%ebp
08360be1 +0x03:  push   %esi
08360be2 +0x04:  push   %ebx
08360be3 +0x05:  sub    $0x30,%esp
08360be6 +0x08:  lea    -0x1c(%ebp),%eax
08360be9 +0x0b:  mov    %eax,(%esp)
08360bec +0x0e:  call   0837f544 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xefe4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xefe4
08360bf1 +0x13:  lea    -0x1c(%ebp),%eax
08360bf4 +0x16:  mov    %eax,0x4(%esp)
08360bf8 +0x1a:  movl   $"Etc/spTable.etc",(%esp)
08360bff +0x21:  call   08910505 <_Z30importSpPerLevelReferenceTablePKcR17stSpPerLevelTable>  ; importSpPerLevelReferenceTable(char const*, stSpPerLevelTable&)
08360c04 +0x26:  test   %eax,%eax
08360c06 +0x28:  setne  %al
08360c09 +0x2b:  test   %al,%al
08360c0b +0x2d:  je     08360c17 <+0x39>
08360c0d +0x2f:  mov    $0x0,%ebx
08360c12 +0x34:  jmp    08360ca3 <+0xc5>
08360c17 +0x39:  movl   $0x0,-0x10(%ebp)
08360c1e +0x40:  jmp    08360c38 <+0x5a>
08360c20 +0x42:  mov    -0x10(%ebp),%edx
08360c23 +0x45:  mov    0x8(%ebp),%eax
08360c26 +0x48:  add    $0x36a2,%edx
08360c2c +0x4e:  movl   $0x0,0x8(%eax,%edx,4)
08360c34 +0x56:  addl   $0x1,-0x10(%ebp)
08360c38 +0x5a:  cmpl   $0x5f,-0x10(%ebp)
08360c3c +0x5e:  setle  %al
08360c3f +0x61:  test   %al,%al
08360c41 +0x63:  jne    08360c20 <+0x42>
08360c43 +0x65:  movl   $0x1,-0xc(%ebp)
08360c4a +0x6c:  jmp    08360c76 <+0x98>
08360c4c +0x6e:  mov    -0xc(%ebp),%ebx
08360c4f +0x71:  mov    -0xc(%ebp),%eax
08360c52 +0x74:  mov    %eax,0x4(%esp)
08360c56 +0x78:  lea    -0x1c(%ebp),%eax
08360c59 +0x7b:  mov    %eax,(%esp)
08360c5c +0x7e:  call   080e2564 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x30a>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x30a
08360c61 +0x83:  mov    (%eax),%eax
08360c63 +0x85:  mov    %eax,%edx
08360c65 +0x87:  mov    0x8(%ebp),%eax
08360c68 +0x8a:  lea    0x36a2(%ebx),%ecx
08360c6e +0x90:  mov    %edx,0x8(%eax,%ecx,4)
08360c72 +0x94:  addl   $0x1,-0xc(%ebp)
08360c76 +0x98:  cmpl   $0x5f,-0xc(%ebp)
08360c7a +0x9c:  setbe  %al
08360c7d +0x9f:  test   %al,%al
08360c7f +0xa1:  jne    08360c4c <+0x6e>
08360c81 +0xa3:  mov    $0x1,%ebx
08360c86 +0xa8:  jmp    08360ca3 <+0xc5>
08360c88 +0xaa:  mov    %edx,%ebx
08360c8a +0xac:  mov    %eax,%esi
08360c8c +0xae:  lea    -0x1c(%ebp),%eax
08360c8f +0xb1:  mov    %eax,(%esp)
08360c92 +0xb4:  call   0837f558 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xeff8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xeff8
08360c97 +0xb9:  mov    %esi,%eax
08360c99 +0xbb:  mov    %ebx,%edx
08360c9b +0xbd:  mov    %eax,(%esp)
08360c9e +0xc0:  call   08ae3750 <_Unwind_Resume>
08360ca3 +0xc5:  lea    -0x1c(%ebp),%eax
08360ca6 +0xc8:  mov    %eax,(%esp)
08360ca9 +0xcb:  call   0837f558 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xeff8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xeff8
08360cae +0xd0:  mov    %ebx,%eax
08360cb0 +0xd2:  add    $0x30,%esp
08360cb3 +0xd5:  pop    %ebx
08360cb4 +0xd6:  pop    %esi
08360cb5 +0xd7:  pop    %ebp
08360cb6 +0xd8:  ret
08360cb7 +0xd9:  nop
```

## 反编译 C

```c
// CDataManager::set_reward_sp @ 0x8360bde

/* CDataManager::set_reward_sp() */

undefined4 __thiscall CDataManager::set_reward_sp(CDataManager *this)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  stSpPerLevelTable local_20 [12];
  int local_14;
  uint local_10;
  
  stSpPerLevelTable::stSpPerLevelTable(local_20);
                    /* try { // try from 08360bff to 08360c03 has its CatchHandler @ 08360c88 */
  iVar2 = importSpPerLevelReferenceTable("Etc/spTable.etc",local_20);
  if (iVar2 == 0) {
    for (local_14 = 0; local_14 < 0x60; local_14 = local_14 + 1) {
      *(undefined4 *)(this + (local_14 + 0x36a2) * 4 + 8) = 0;
    }
    for (local_10 = 1; uVar1 = local_10, local_10 < 0x60; local_10 = local_10 + 1) {
      puVar3 = (undefined4 *)
               std::vector<unsigned_int,std::allocator<unsigned_int>>::operator[]
                         ((vector<unsigned_int,std::allocator<unsigned_int>> *)local_20,local_10);
      *(undefined4 *)(this + (uVar1 + 0x36a2) * 4 + 8) = *puVar3;
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  stSpPerLevelTable::~stSpPerLevelTable(local_20);
  return uVar4;
}
```
