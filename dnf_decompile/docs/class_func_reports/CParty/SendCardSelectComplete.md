# SendCardSelectComplete

`_ZN6CParty22SendCardSelectCompleteEv`

`CParty::SendCardSelectComplete()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b494e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b494e  _ZN6CParty22SendCardSelectCompleteEv
#           CParty::SendCardSelectComplete()
# range [0x085b494e, 0x085b49cf]
085b494e +0x00:  push   %ebp
085b494f +0x01:  mov    %esp,%ebp
085b4951 +0x03:  push   %esi
085b4952 +0x04:  push   %ebx
085b4953 +0x05:  sub    $0x20,%esp
085b4956 +0x08:  lea    -0x14(%ebp),%eax
085b4959 +0x0b:  mov    %eax,(%esp)
085b495c +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085b4961 +0x13:  movl   $0x43,0x8(%esp)
085b4969 +0x1b:  movl   $0x0,0x4(%esp)
085b4971 +0x23:  lea    -0x14(%ebp),%eax
085b4974 +0x26:  mov    %eax,(%esp)
085b4977 +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085b497c +0x2e:  movl   $0x1,0x4(%esp)
085b4984 +0x36:  lea    -0x14(%ebp),%eax
085b4987 +0x39:  mov    %eax,(%esp)
085b498a +0x3c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085b498f +0x41:  lea    -0x14(%ebp),%eax
085b4992 +0x44:  mov    %eax,0x4(%esp)
085b4996 +0x48:  mov    0x8(%ebp),%eax
085b4999 +0x4b:  mov    %eax,(%esp)
085b499c +0x4e:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085b49a1 +0x53:  jmp    085b49be <+0x70>
085b49a3 +0x55:  mov    %edx,%ebx
085b49a5 +0x57:  mov    %eax,%esi
085b49a7 +0x59:  lea    -0x14(%ebp),%eax
085b49aa +0x5c:  mov    %eax,(%esp)
085b49ad +0x5f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085b49b2 +0x64:  mov    %esi,%eax
085b49b4 +0x66:  mov    %ebx,%edx
085b49b6 +0x68:  mov    %eax,(%esp)
085b49b9 +0x6b:  call   08ae3750 <_Unwind_Resume>
085b49be +0x70:  lea    -0x14(%ebp),%eax
085b49c1 +0x73:  mov    %eax,(%esp)
085b49c4 +0x76:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085b49c9 +0x7b:  add    $0x20,%esp
085b49cc +0x7e:  pop    %ebx
085b49cd +0x7f:  pop    %esi
085b49ce +0x80:  pop    %ebp
085b49cf +0x81:  ret
```

## 反编译 C

```c
// CParty::SendCardSelectComplete @ 0x85b494e

/* CParty::SendCardSelectComplete() */

void __thiscall CParty::SendCardSelectComplete(CParty *this)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 085b4977 to 085b49a0 has its CatchHandler @ 085b49a3 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x43);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  send_to_party(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
