# sendItemDictionaryInfoTotal

`_ZN15CItemDictionary27sendItemDictionaryInfoTotalEP5CUser`

`CItemDictionary::sendItemDictionaryInfoTotal(CUser*)`

| 类 | 地址 |
|---|---|
| `CItemDictionary` | `0x0811dd9a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811dd9a  _ZN15CItemDictionary27sendItemDictionaryInfoTotalEP5CUser
#           CItemDictionary::sendItemDictionaryInfoTotal(CUser*)
# range [0x0811dd9a, 0x0811de7f]
0811dd9a +0x00:  push   %ebp
0811dd9b +0x01:  mov    %esp,%ebp
0811dd9d +0x03:  push   %esi
0811dd9e +0x04:  push   %ebx
0811dd9f +0x05:  sub    $0x20,%esp
0811dda2 +0x08:  cmpl   $0x0,0xc(%ebp)
0811dda6 +0x0c:  je     0811de78 <+0xde>
0811ddac +0x12:  lea    -0x18(%ebp),%eax
0811ddaf +0x15:  mov    %eax,(%esp)
0811ddb2 +0x18:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0811ddb7 +0x1d:  movl   $0x18a,0x8(%esp)
0811ddbf +0x25:  movl   $0x0,0x4(%esp)
0811ddc7 +0x2d:  lea    -0x18(%ebp),%eax
0811ddca +0x30:  mov    %eax,(%esp)
0811ddcd +0x33:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0811ddd2 +0x38:  mov    0x8(%ebp),%eax
0811ddd5 +0x3b:  mov    %eax,(%esp)
0811ddd8 +0x3e:  call   0811db60 <_ZNK15CItemDictionary15getLengthBinaryEv>  ; CItemDictionary::getLengthBinary() const
0811dddd +0x43:  mov    %eax,-0xc(%ebp)
0811dde0 +0x46:  cmpl   $0x0,-0xc(%ebp)
0811dde4 +0x4a:  jne    0811ddfb <+0x61>
0811dde6 +0x4c:  movl   $0x0,0x4(%esp)
0811ddee +0x54:  lea    -0x18(%ebp),%eax
0811ddf1 +0x57:  mov    %eax,(%esp)
0811ddf4 +0x5a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0811ddf9 +0x5f:  jmp    0811de29 <+0x8f>
0811ddfb +0x61:  mov    -0xc(%ebp),%eax
0811ddfe +0x64:  mov    %eax,0x4(%esp)
0811de02 +0x68:  lea    -0x18(%ebp),%eax
0811de05 +0x6b:  mov    %eax,(%esp)
0811de08 +0x6e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0811de0d +0x73:  mov    0x8(%ebp),%eax
0811de10 +0x76:  add    $0x5,%eax
0811de13 +0x79:  mov    -0xc(%ebp),%edx
0811de16 +0x7c:  mov    %edx,0x8(%esp)
0811de1a +0x80:  mov    %eax,0x4(%esp)
0811de1e +0x84:  lea    -0x18(%ebp),%eax
0811de21 +0x87:  mov    %eax,(%esp)
0811de24 +0x8a:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
0811de29 +0x8f:  movl   $0x1,0x4(%esp)
0811de31 +0x97:  lea    -0x18(%ebp),%eax
0811de34 +0x9a:  mov    %eax,(%esp)
0811de37 +0x9d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0811de3c +0xa2:  lea    -0x18(%ebp),%eax
0811de3f +0xa5:  mov    %eax,0x4(%esp)
0811de43 +0xa9:  mov    0xc(%ebp),%eax
0811de46 +0xac:  mov    %eax,(%esp)
0811de49 +0xaf:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0811de4e +0xb4:  jmp    0811de6b <+0xd1>
0811de50 +0xb6:  mov    %edx,%ebx
0811de52 +0xb8:  mov    %eax,%esi
0811de54 +0xba:  lea    -0x18(%ebp),%eax
0811de57 +0xbd:  mov    %eax,(%esp)
0811de5a +0xc0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0811de5f +0xc5:  mov    %esi,%eax
0811de61 +0xc7:  mov    %ebx,%edx
0811de63 +0xc9:  mov    %eax,(%esp)
0811de66 +0xcc:  call   08ae3750 <_Unwind_Resume>
0811de6b +0xd1:  lea    -0x18(%ebp),%eax
0811de6e +0xd4:  mov    %eax,(%esp)
0811de71 +0xd7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0811de76 +0xdc:  jmp    0811de79 <+0xdf>
0811de78 +0xde:  nop
0811de79 +0xdf:  add    $0x20,%esp
0811de7c +0xe2:  pop    %ebx
0811de7d +0xe3:  pop    %esi
0811de7e +0xe4:  pop    %ebp
0811de7f +0xe5:  ret
```

## 反编译 C

```c
// CItemDictionary::sendItemDictionaryInfoTotal @ 0x811dd9a

/* CItemDictionary::sendItemDictionaryInfoTotal(CUser*) */

void __thiscall CItemDictionary::sendItemDictionaryInfoTotal(CItemDictionary *this,CUser *param_1)

{
  PacketGuard local_1c [12];
  int local_10;
  
  if (param_1 != (CUser *)0x0) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0811ddcd to 0811de4d has its CatchHandler @ 0811de50 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x18a);
    local_10 = getLengthBinary(this);
    if (local_10 == 0) {
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,0);
    }
    else {
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,local_10);
      InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_1c,(char *)(this + 5),local_10);
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return;
}
```
