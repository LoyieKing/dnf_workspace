# get_party_object

`_ZN10QuickParty11CQuickParty16get_party_objectEi`

`QuickParty::CQuickParty::get_party_object(int)`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickParty` | `0x082696d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082696d0  _ZN10QuickParty11CQuickParty16get_party_objectEi
#           QuickParty::CQuickParty::get_party_object(int)
# range [0x082696d0, 0x0826972b]
082696d0 +0x00:  push   %ebp
082696d1 +0x01:  mov    %esp,%ebp
082696d3 +0x03:  push   %ebx
082696d4 +0x04:  sub    $0x24,%esp
082696d7 +0x07:  cmpl   $0x0,0xc(%ebp)
082696db +0x0b:  js     082696e3 <+0x13>
082696dd +0x0d:  cmpl   $0x3,0xc(%ebp)
082696e1 +0x11:  jle    082696ea <+0x1a>
082696e3 +0x13:  mov    $0x0,%eax
082696e8 +0x18:  jmp    08269725 <+0x55>
082696ea +0x1a:  mov    0xc(%ebp),%edx
082696ed +0x1d:  mov    0x8(%ebp),%eax
082696f0 +0x20:  mov    (%eax,%edx,4),%eax
082696f3 +0x23:  cmp    $0xffffffff,%eax
082696f6 +0x26:  je     08269720 <+0x50>
082696f8 +0x28:  mov    0xc(%ebp),%edx
082696fb +0x2b:  mov    0x8(%ebp),%eax
082696fe +0x2e:  mov    (%eax,%edx,4),%ebx
08269701 +0x31:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08269706 +0x36:  mov    %ebx,0x4(%esp)
0826970a +0x3a:  mov    %eax,(%esp)
0826970d +0x3d:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
08269712 +0x42:  mov    %eax,-0xc(%ebp)
08269715 +0x45:  cmpl   $0x0,-0xc(%ebp)
08269719 +0x49:  je     08269720 <+0x50>
0826971b +0x4b:  mov    -0xc(%ebp),%eax
0826971e +0x4e:  jmp    08269725 <+0x55>
08269720 +0x50:  mov    $0x0,%eax
08269725 +0x55:  add    $0x24,%esp
08269728 +0x58:  pop    %ebx
08269729 +0x59:  pop    %ebp
0826972a +0x5a:  ret
0826972b +0x5b:  nop
```

## 反编译 C

```c
// QuickParty::CQuickParty::get_party_object @ 0x82696d0

/* QuickParty::CQuickParty::get_party_object(int) */

int __thiscall QuickParty::CQuickParty::get_party_object(CQuickParty *this,int param_1)

{
  int iVar1;
  
  if (((-1 < param_1) && (param_1 < 4)) && (*(int *)(this + param_1 * 4) != -1)) {
    iVar1 = G_CGameManager();
    iVar1 = CGameManager::GetParty(iVar1);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  return 0;
}
```
