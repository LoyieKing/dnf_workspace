# ConnectP2P

`_ZN6CParty10ConnectP2PEP5CUserPci`

`CParty::ConnectP2P(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859a48c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859a48c  _ZN6CParty10ConnectP2PEP5CUserPci
#           CParty::ConnectP2P(CUser*, char*, int)
# range [0x0859a48c, 0x0859a60f]
0859a48c +0x000:  push   %ebp
0859a48d +0x001:  mov    %esp,%ebp
0859a48f +0x003:  sub    $0x28,%esp
0859a492 +0x006:  mov    0x8(%ebp),%eax
0859a495 +0x009:  mov    %eax,(%esp)
0859a498 +0x00c:  call   0822d83a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ee4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ee4
0859a49d +0x011:  cmp    $0x1,%al
0859a49f +0x013:  setne  %al
0859a4a2 +0x016:  test   %al,%al
0859a4a4 +0x018:  je     0859a4d2 <+0x46>
0859a4a6 +0x01a:  movl   $0x4,(%esp)
0859a4ad +0x021:  call   08725800 <__cxa_allocate_exception>
0859a4b2 +0x026:  mov    %eax,%edx
0859a4b4 +0x028:  movl   $0x13,(%edx)
0859a4ba +0x02e:  movl   $0x0,0x8(%esp)
0859a4c2 +0x036:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
0859a4ca +0x03e:  mov    %eax,(%esp)
0859a4cd +0x041:  call   08724c50 <__cxa_throw>
0859a4d2 +0x046:  movb   $0x1,-0xd(%ebp)
0859a4d6 +0x04a:  movl   $0x0,-0xc(%ebp)
0859a4dd +0x051:  jmp    0859a5ee <+0x162>
0859a4e2 +0x056:  mov    -0xc(%ebp),%eax
0859a4e5 +0x059:  mov    %eax,0x4(%esp)
0859a4e9 +0x05d:  mov    0x8(%ebp),%eax
0859a4ec +0x060:  mov    %eax,(%esp)
0859a4ef +0x063:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859a4f4 +0x068:  xor    $0x1,%eax
0859a4f7 +0x06b:  test   %al,%al
0859a4f9 +0x06d:  jne    0859a5e9 <+0x15d>
0859a4ff +0x073:  mov    -0xc(%ebp),%edx
0859a502 +0x076:  mov    0x8(%ebp),%ecx
0859a505 +0x079:  mov    %edx,%eax
0859a507 +0x07b:  add    %eax,%eax
0859a509 +0x07d:  add    %edx,%eax
0859a50b +0x07f:  shl    $0x3,%eax
0859a50e +0x082:  lea    (%ecx,%eax,1),%eax
0859a511 +0x085:  add    $0x78,%eax
0859a514 +0x088:  mov    (%eax),%eax
0859a516 +0x08a:  cmp    0xc(%ebp),%eax
0859a519 +0x08d:  jne    0859a5c6 <+0x13a>
0859a51f +0x093:  mov    -0xc(%ebp),%edx
0859a522 +0x096:  mov    0x8(%ebp),%ecx
0859a525 +0x099:  mov    %edx,%eax
0859a527 +0x09b:  add    %eax,%eax
0859a529 +0x09d:  add    %edx,%eax
0859a52b +0x09f:  shl    $0x3,%eax
0859a52e +0x0a2:  lea    (%ecx,%eax,1),%eax
0859a531 +0x0a5:  add    $0x70,%eax
0859a534 +0x0a8:  movzbl 0x14(%eax),%eax
0859a538 +0x0ac:  cmp    $0x1,%al
0859a53a +0x0ae:  jne    0859a568 <+0xdc>
0859a53c +0x0b0:  movl   $0x4,(%esp)
0859a543 +0x0b7:  call   08725800 <__cxa_allocate_exception>
0859a548 +0x0bc:  mov    %eax,%edx
0859a54a +0x0be:  movl   $0x12,(%edx)
0859a550 +0x0c4:  movl   $0x0,0x8(%esp)
0859a558 +0x0cc:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
0859a560 +0x0d4:  mov    %eax,(%esp)
0859a563 +0x0d7:  call   08724c50 <__cxa_throw>
0859a568 +0x0dc:  mov    -0xc(%ebp),%edx
0859a56b +0x0df:  mov    0x8(%ebp),%ecx
0859a56e +0x0e2:  mov    %edx,%eax
0859a570 +0x0e4:  add    %eax,%eax
0859a572 +0x0e6:  add    %edx,%eax
0859a574 +0x0e8:  shl    $0x3,%eax
0859a577 +0x0eb:  lea    (%ecx,%eax,1),%eax
0859a57a +0x0ee:  add    $0x70,%eax
0859a57d +0x0f1:  movb   $0x1,0x14(%eax)
0859a581 +0x0f5:  movl   $0x4,-0x14(%ebp)
0859a588 +0x0fc:  lea    -0x14(%ebp),%eax
0859a58b +0x0ff:  mov    %eax,0x4(%esp)
0859a58f +0x103:  lea    0x14(%ebp),%eax
0859a592 +0x106:  mov    %eax,(%esp)
0859a595 +0x109:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
0859a59a +0x10e:  mov    (%eax),%eax
0859a59c +0x110:  mov    %eax,%ecx
0859a59e +0x112:  mov    -0xc(%ebp),%edx
0859a5a1 +0x115:  mov    %edx,%eax
0859a5a3 +0x117:  add    %eax,%eax
0859a5a5 +0x119:  add    %edx,%eax
0859a5a7 +0x11b:  shl    $0x3,%eax
0859a5aa +0x11e:  add    $0x70,%eax
0859a5ad +0x121:  add    0x8(%ebp),%eax
0859a5b0 +0x124:  lea    0x16(%eax),%edx
0859a5b3 +0x127:  mov    %ecx,0x8(%esp)
0859a5b7 +0x12b:  mov    0x10(%ebp),%eax
0859a5ba +0x12e:  mov    %eax,0x4(%esp)
0859a5be +0x132:  mov    %edx,(%esp)
0859a5c1 +0x135:  call   0807d8a0 <_init+0x198>
0859a5c6 +0x13a:  mov    -0xc(%ebp),%edx
0859a5c9 +0x13d:  mov    0x8(%ebp),%ecx
0859a5cc +0x140:  mov    %edx,%eax
0859a5ce +0x142:  add    %eax,%eax
0859a5d0 +0x144:  add    %edx,%eax
0859a5d2 +0x146:  shl    $0x3,%eax
0859a5d5 +0x149:  lea    (%ecx,%eax,1),%eax
0859a5d8 +0x14c:  add    $0x70,%eax
0859a5db +0x14f:  movzbl 0x14(%eax),%eax
0859a5df +0x153:  cmp    $0x1,%al
0859a5e1 +0x155:  je     0859a5ea <+0x15e>
0859a5e3 +0x157:  movb   $0x0,-0xd(%ebp)
0859a5e7 +0x15b:  jmp    0859a5ea <+0x15e>
0859a5e9 +0x15d:  nop
0859a5ea +0x15e:  addl   $0x1,-0xc(%ebp)
0859a5ee +0x162:  cmpl   $0x3,-0xc(%ebp)
0859a5f2 +0x166:  setle  %al
0859a5f5 +0x169:  test   %al,%al
0859a5f7 +0x16b:  jne    0859a4e2 <+0x56>
0859a5fd +0x171:  cmpb   $0x0,-0xd(%ebp)
0859a601 +0x175:  je     0859a60e <+0x182>
0859a603 +0x177:  mov    0x8(%ebp),%eax
0859a606 +0x17a:  mov    %eax,(%esp)
0859a609 +0x17d:  call   0859a830 <_ZN6CParty15ClearBadP2PUserEv>  ; CParty::ClearBadP2PUser()
0859a60e +0x182:  leave
0859a60f +0x183:  ret
```

## 反编译 C

```c
// CParty::ConnectP2P @ 0x859a48c

/* CParty::ConnectP2P(CUser*, char*, int) */

void CParty::ConnectP2P(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  size_t *psVar3;
  int local_18;
  char local_11;
  int local_10;
  
  cVar1 = get_state((CParty *)param_1);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x13;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&ENUM_ERROR::typeinfo,0);
  }
  local_11 = '\x01';
  local_10 = 0;
  do {
    if (3 < local_10) {
      if (local_11 != '\0') {
        ClearBadP2PUser((CParty *)param_1);
      }
      return;
    }
    cVar1 = _checkValidUser((CParty *)param_1,local_10);
    if (cVar1 == '\x01') {
      if (*(char **)(param_1 + local_10 * 0x18 + 0x78) == param_2) {
        if (param_1[local_10 * 0x18 + 0x84] == (CUser)0x1) {
          puVar2 = (undefined4 *)__cxa_allocate_exception(4);
          *puVar2 = 0x12;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar2,&ENUM_ERROR::typeinfo,0);
        }
        param_1[local_10 * 0x18 + 0x84] = (CUser)0x1;
        local_18 = 4;
        psVar3 = (size_t *)std::min<int>((int *)&stack0x00000010,&local_18);
        memcpy(param_1 + local_10 * 0x18 + 0x86,(void *)param_3,*psVar3);
      }
      if (param_1[local_10 * 0x18 + 0x84] != (CUser)0x1) {
        local_11 = '\0';
      }
    }
    local_10 = local_10 + 1;
  } while( true );
}
```
