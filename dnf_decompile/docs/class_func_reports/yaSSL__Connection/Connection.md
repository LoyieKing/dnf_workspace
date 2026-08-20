# Connection

`_ZN5yaSSL10ConnectionC1ENS_15ProtocolVersionERNS_10RandomPoolE`

`yaSSL::Connection::Connection(yaSSL::ProtocolVersion, yaSSL::RandomPool&)`

| 类 | 地址 |
|---|---|
| `yaSSL::Connection` | `0x08747850` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747850  _ZN5yaSSL10ConnectionC1ENS_15ProtocolVersionERNS_10RandomPoolE
#           yaSSL::Connection::Connection(yaSSL::ProtocolVersion, yaSSL::RandomPool&)
# range [0x08747850, 0x0874793a]
08747850 +0x00:  push   %ebp
08747851 +0x01:  mov    %esp,%ebp
08747853 +0x03:  push   %esi
08747854 +0x04:  push   %ebx
08747855 +0x05:  sub    $0x10,%esp
08747858 +0x08:  movzwl 0xc(%ebp),%edx
0874785c +0x0c:  mov    0x8(%ebp),%esi
0874785f +0x0f:  call   08722df8 <__i686.get_pc_thunk.bx>
08747864 +0x14:  add    $0xc25334,%ebx
0874786a +0x1a:  mov    %edx,%eax
0874786c +0x1c:  movzbl %dh,%edx
0874786f +0x1f:  cmp    $0x2,%al
08747871 +0x21:  movl   $0x0,(%esi)
08747877 +0x27:  movl   $0x0,0x11c(%esi)
08747881 +0x31:  movl   $0x0,0x120(%esi)
0874788b +0x3b:  movl   $0x0,0x124(%esi)
08747895 +0x45:  movb   $0x0,0x128(%esi)
0874789c +0x4c:  movb   $0x0,0x129(%esi)
087478a3 +0x53:  jbe    087478c0 <+0x70>
087478a5 +0x55:  test   %dl,%dl
087478a7 +0x57:  je     08747928 <+0xd8>
087478a9 +0x59:  cmp    $0x1,%dl
087478ac +0x5c:  movb   $0x1,0x12a(%esi)
087478b3 +0x63:  jbe    0874792f <+0xdf>
087478b5 +0x65:  mov    $0x1,%ecx
087478ba +0x6a:  jmp    087478c9 <+0x79>
087478bc +0x6c:  lea    0x0(%esi,%eiz,1),%esi
087478c0 +0x70:  movb   $0x0,0x12a(%esi)
087478c7 +0x77:  xor    %ecx,%ecx
087478c9 +0x79:  mov    %al,0x12e(%esi)
087478cf +0x7f:  lea    0x130(%esi),%eax
087478d5 +0x85:  mov    %cl,0x12b(%esi)
087478db +0x8b:  movb   $0x0,0x12d(%esi)
087478e2 +0x92:  mov    %dl,0x12f(%esi)
087478e8 +0x98:  mov    %eax,(%esp)
087478eb +0x9b:  movl   $0x0,0x8(%esp)
087478f3 +0xa3:  movl   $0x3,0x4(%esp)
087478fb +0xab:  call   08746950 <_ZN5yaSSL15ProtocolVersionC1Ehh>  ; yaSSL::ProtocolVersion::ProtocolVersion(unsigned char, unsigned char)
08747900 +0xb0:  mov    0x10(%ebp),%eax
08747903 +0xb3:  mov    %eax,0x134(%esi)
08747909 +0xb9:  add    $0x74,%esi
0874790c +0xbc:  xor    %eax,%eax
0874790e +0xbe:  movl   $0x0,(%esi,%eax,1)
08747915 +0xc5:  add    $0x4,%eax
08747918 +0xc8:  cmp    $0x20,%eax
0874791b +0xcb:  jb     0874790e <+0xbe>
0874791d +0xcd:  add    $0x10,%esp
08747920 +0xd0:  pop    %ebx
08747921 +0xd1:  pop    %esi
08747922 +0xd2:  pop    %ebp
08747923 +0xd3:  ret
08747924 +0xd4:  lea    0x0(%esi,%eiz,1),%esi
08747928 +0xd8:  movb   $0x0,0x12a(%esi)
0874792f +0xdf:  xor    %ecx,%ecx
08747931 +0xe1:  jmp    087478c9 <+0x79>
08747933 +0xe3:  nop
08747934 +0xe4:  lea    0x0(%esi),%esi
0874793a +0xea:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::Connection::Connection @ 0x8747850

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Connection::Connection(yaSSL::ProtocolVersion, yaSSL::RandomPool&) */

void __thiscall
yaSSL::Connection::Connection(Connection *this,undefined2 param_2,undefined4 param_3)

{
  Connection CVar1;
  uint uVar2;
  Connection CVar3;
  
  CVar1 = SUB21((ushort)param_2 >> 8,0);
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  this[0x128] = (Connection)0x0;
  this[0x129] = (Connection)0x0;
  if ((byte)SUB21(param_2,0) < 3) {
    this[0x12a] = (Connection)0x0;
    CVar3 = (Connection)0x0;
  }
  else {
    if (CVar1 == (Connection)0x0) {
      this[0x12a] = (Connection)0x0;
    }
    else {
      this[0x12a] = (Connection)0x1;
      if (1 < (byte)CVar1) {
        CVar3 = (Connection)0x1;
        goto LAB_087478c9;
      }
    }
    CVar3 = (Connection)0x0;
  }
LAB_087478c9:
  this[0x12e] = SUB21(param_2,0);
  this[299] = CVar3;
  this[0x12d] = (Connection)0x0;
  this[0x12f] = CVar1;
  ProtocolVersion::ProtocolVersion((ProtocolVersion *)(this + 0x130),'\x03','\0');
  *(undefined4 *)(this + 0x134) = param_3;
  uVar2 = 0;
  do {
    *(undefined4 *)(this + uVar2 + 0x74) = 0;
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x20);
  return;
}
```
