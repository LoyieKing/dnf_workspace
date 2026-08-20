# CUserCharacInfo

`_ZN15CUserCharacInfoC1Ev`

`CUserCharacInfo::CUserCharacInfo()`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0864e15e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864e15e  _ZN15CUserCharacInfoC1Ev
#           CUserCharacInfo::CUserCharacInfo()
# range [0x0864e15e, 0x0864e1ed]
0864e15e +0x00:  push   %ebp
0864e15f +0x01:  mov    %esp,%ebp
0864e161 +0x03:  push   %esi
0864e162 +0x04:  push   %ebx
0864e163 +0x05:  sub    $0x10,%esp
0864e166 +0x08:  mov    0x8(%ebp),%eax
0864e169 +0x0b:  add    $0x18,%eax
0864e16c +0x0e:  mov    %eax,(%esp)
0864e16f +0x11:  call   085d58da <_ZN13PvpResultTypeC1Ev>  ; PvpResultType::PvpResultType()
0864e174 +0x16:  mov    0x8(%ebp),%eax
0864e177 +0x19:  add    $0x9c,%eax
0864e17c +0x1e:  mov    %eax,(%esp)
0864e17f +0x21:  call   08698c40 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x5495>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x5495
0864e184 +0x26:  mov    0x8(%ebp),%eax
0864e187 +0x29:  add    $0xb4,%eax
0864e18c +0x2e:  mov    %eax,(%esp)
0864e18f +0x31:  call   08374ff2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xefbe>  ; global constructors keyed to CServerEvent::m_nExpRate+0xefbe
0864e194 +0x36:  mov    0x8(%ebp),%eax
0864e197 +0x39:  movl   $0x0,0x10(%eax)
0864e19e +0x40:  mov    0x8(%ebp),%eax
0864e1a1 +0x43:  movl   $0x0,0x14(%eax)
0864e1a8 +0x4a:  mov    0x8(%ebp),%eax
0864e1ab +0x4d:  mov    %eax,(%esp)
0864e1ae +0x50:  call   0864e1f2 <_ZN15CUserCharacInfo14resetSaveFlagsEv>  ; CUserCharacInfo::resetSaveFlags()
0864e1b3 +0x55:  add    $0x10,%esp
0864e1b6 +0x58:  pop    %ebx
0864e1b7 +0x59:  pop    %esi
0864e1b8 +0x5a:  pop    %ebp
0864e1b9 +0x5b:  ret
0864e1ba +0x5c:  mov    %edx,%ebx
0864e1bc +0x5e:  mov    %eax,%esi
0864e1be +0x60:  mov    0x8(%ebp),%eax
0864e1c1 +0x63:  add    $0x9c,%eax
0864e1c6 +0x68:  mov    %eax,(%esp)
0864e1c9 +0x6b:  call   08697aac <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x4301>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x4301
0864e1ce +0x70:  mov    %esi,%eax
0864e1d0 +0x72:  mov    %ebx,%edx
0864e1d2 +0x74:  jmp    0864e1d4 <+0x76>
0864e1d4 +0x76:  mov    %edx,%ebx
0864e1d6 +0x78:  mov    %eax,%esi
0864e1d8 +0x7a:  mov    0x8(%ebp),%eax
0864e1db +0x7d:  add    $0x18,%eax
0864e1de +0x80:  mov    %eax,(%esp)
0864e1e1 +0x83:  call   085d58e0 <_ZN13PvpResultTypeD1Ev>  ; PvpResultType::~PvpResultType()
0864e1e6 +0x88:  mov    %esi,%eax
0864e1e8 +0x8a:  mov    %ebx,%edx
0864e1ea +0x8c:  mov    %eax,(%esp)
0864e1ed +0x8f:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// CUserCharacInfo::CUserCharacInfo @ 0x864e15e

/* CUserCharacInfo::CUserCharacInfo() */

void __thiscall CUserCharacInfo::CUserCharacInfo(CUserCharacInfo *this)

{
  PvpResultType::PvpResultType((PvpResultType *)(this + 0x18));
                    /* try { // try from 0864e17f to 0864e183 has its CatchHandler @ 0864e1d4 */
  std::map<int,GameResultType,std::less<int>,std::allocator<std::pair<int_const,GameResultType>>>::
  map((map<int,GameResultType,std::less<int>,std::allocator<std::pair<int_const,GameResultType>>> *)
      (this + 0x9c));
                    /* try { // try from 0864e18f to 0864e193 has its CatchHandler @ 0864e1ba */
  WongWork::CDungeonClear::CDungeonClear((CDungeonClear *)(this + 0xb4));
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  resetSaveFlags(this);
  return;
}
```
