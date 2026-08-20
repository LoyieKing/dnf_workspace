# Recv

`_ZN5CUser4RecvEv`

`CUser::Recv()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08647ffc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08647ffc  _ZN5CUser4RecvEv
#           CUser::Recv()
# range [0x08647ffc, 0x0864809b]
08647ffc +0x00:  push   %ebp
08647ffd +0x01:  mov    %esp,%ebp
08647fff +0x03:  sub    $0x28,%esp
08648002 +0x06:  mov    0x8(%ebp),%eax
08648005 +0x09:  add    $0xe0,%eax
0864800a +0x0e:  mov    %eax,(%esp)
0864800d +0x11:  call   086985f0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x4e45>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x4e45
08648012 +0x16:  mov    %eax,-0xc(%ebp)
08648015 +0x19:  cmpl   $0x0,-0xc(%ebp)
08648019 +0x1d:  jle    08648065 <+0x69>
0864801b +0x1f:  mov    -0xc(%ebp),%eax
0864801e +0x22:  mov    %eax,0x4(%esp)
08648022 +0x26:  mov    0x8(%ebp),%eax
08648025 +0x29:  mov    %eax,(%esp)
08648028 +0x2c:  call   08647890 <_ZN5CUser7ParsingEi>  ; CUser::Parsing(int)
0864802d +0x31:  xor    $0x1,%eax
08648030 +0x34:  test   %al,%al
08648032 +0x36:  je     0864805e <+0x62>
08648034 +0x38:  movl   $0x0,0xc(%esp)
0864803c +0x40:  movl   $0x0,0x8(%esp)
08648044 +0x48:  movl   $0x4,0x4(%esp)
0864804c +0x50:  mov    0x8(%ebp),%eax
0864804f +0x53:  mov    %eax,(%esp)
08648052 +0x56:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
08648057 +0x5b:  mov    $0x0,%eax
0864805c +0x60:  jmp    0864809a <+0x9e>
0864805e +0x62:  mov    $0x1,%eax
08648063 +0x67:  jmp    0864809a <+0x9e>
08648065 +0x69:  cmpl   $0x0,-0xc(%ebp)
08648069 +0x6d:  jns    08648095 <+0x99>
0864806b +0x6f:  movl   $0x0,0xc(%esp)
08648073 +0x77:  movl   $0x0,0x8(%esp)
0864807b +0x7f:  movl   $0x5,0x4(%esp)
08648083 +0x87:  mov    0x8(%ebp),%eax
08648086 +0x8a:  mov    %eax,(%esp)
08648089 +0x8d:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
0864808e +0x92:  mov    $0x0,%eax
08648093 +0x97:  jmp    0864809a <+0x9e>
08648095 +0x99:  mov    $0x1,%eax
0864809a +0x9e:  leave
0864809b +0x9f:  ret
```

## 反编译 C

```c
// CUser::Recv @ 0x8647ffc

/* CUser::Recv() */

undefined4 __thiscall CUser::Recv(CUser *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CNetwork<4096,450000>::recv_packet((CNetwork<4096,450000> *)(this + 0xe0));
  if (iVar2 < 1) {
    if (iVar2 < 0) {
      DisConnSig(this,5,0,0);
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    cVar1 = Parsing(this,iVar2);
    if (cVar1 == '\x01') {
      uVar3 = 1;
    }
    else {
      DisConnSig(this,4,0,0);
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
