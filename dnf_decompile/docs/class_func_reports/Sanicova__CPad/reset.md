# reset

`_ZN8Sanicova4CPad5resetEv`

`Sanicova::CPad::reset()`

| 类 | 地址 |
|---|---|
| `Sanicova::CPad` | `0x08599616` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08599616  _ZN8Sanicova4CPad5resetEv
#           Sanicova::CPad::reset()
# range [0x08599616, 0x08599711]
08599616 +0x00:  push   %ebp
08599617 +0x01:  mov    %esp,%ebp
08599619 +0x03:  push   %ebx
0859961a +0x04:  sub    $0x54,%esp
0859961d +0x07:  mov    0x8(%ebp),%eax
08599620 +0x0a:  mov    %eax,(%esp)
08599623 +0x0d:  call   0822efe6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4690>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4690
08599628 +0x12:  test   %al,%al
0859962a +0x14:  je     0859970c <+0xf6>
08599630 +0x1a:  mov    0x8(%ebp),%eax
08599633 +0x1d:  mov    0x28(%eax),%eax
08599636 +0x20:  add    $0xb4,%eax
0859963b +0x25:  mov    %eax,-0x10(%ebp)
0859963e +0x28:  movl   $0x0,(%esp)
08599645 +0x2f:  call   0807d750 <_init+0x48>
0859964a +0x34:  mov    %eax,-0xc(%ebp)
0859964d +0x37:  mov    0x8(%ebp),%eax
08599650 +0x3a:  movzbl 0x25(%eax),%eax
08599654 +0x3e:  movzbl %al,%ebx
08599657 +0x41:  movl   $0x0,0xc(%esp)
0859965f +0x49:  movl   $0x41,0x8(%esp)
08599667 +0x51:  movl   $&_ZZN8Sanicova4CPad5resetEvE19__PRETTY_FUNCTION__,0x4(%esp)
0859966f +0x59:  lea    -0x30(%ebp),%eax
08599672 +0x5c:  mov    %eax,(%esp)
08599675 +0x5f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0859967a +0x64:  mov    %ebx,0x10(%esp)
0859967e +0x68:  mov    -0xc(%ebp),%eax
08599681 +0x6b:  mov    %eax,0xc(%esp)
08599685 +0x6f:  mov    -0x10(%ebp),%eax
08599688 +0x72:  mov    %eax,0x8(%esp)
0859968c +0x76:  movl   $"[Before]Goblin Certified check_time(%d), cur_time(%d), Certified(%d)",0x4(%esp)
08599694 +0x7e:  lea    -0x30(%ebp),%eax
08599697 +0x81:  mov    %eax,(%esp)
0859969a +0x84:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0859969f +0x89:  mov    -0x10(%ebp),%eax
085996a2 +0x8c:  cmp    -0xc(%ebp),%eax
085996a5 +0x8f:  jge    085996ba <+0xa4>
085996a7 +0x91:  movl   $0x0,0x4(%esp)
085996af +0x99:  mov    0x8(%ebp),%eax
085996b2 +0x9c:  mov    %eax,(%esp)
085996b5 +0x9f:  call   0826530e <_GLOBAL__I__ZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASE+0xe6>  ; global constructors keyed to Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&)+0xe6
085996ba +0xa4:  mov    0x8(%ebp),%eax
085996bd +0xa7:  movzbl 0x25(%eax),%eax
085996c1 +0xab:  movzbl %al,%ebx
085996c4 +0xae:  movl   $0x0,0xc(%esp)
085996cc +0xb6:  movl   $0x4a,0x8(%esp)
085996d4 +0xbe:  movl   $&_ZZN8Sanicova4CPad5resetEvE19__PRETTY_FUNCTION__,0x4(%esp)
085996dc +0xc6:  lea    -0x20(%ebp),%eax
085996df +0xc9:  mov    %eax,(%esp)
085996e2 +0xcc:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085996e7 +0xd1:  mov    %ebx,0x10(%esp)
085996eb +0xd5:  mov    -0xc(%ebp),%eax
085996ee +0xd8:  mov    %eax,0xc(%esp)
085996f2 +0xdc:  mov    -0x10(%ebp),%eax
085996f5 +0xdf:  mov    %eax,0x8(%esp)
085996f9 +0xe3:  movl   $"[After]Goblin Certified check_time(%d), cur_time(%d), Certified(%d)",0x4(%esp)
08599701 +0xeb:  lea    -0x20(%ebp),%eax
08599704 +0xee:  mov    %eax,(%esp)
08599707 +0xf1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0859970c +0xf6:  add    $0x54,%esp
0859970f +0xf9:  pop    %ebx
08599710 +0xfa:  pop    %ebp
08599711 +0xfb:  ret
```

## 反编译 C

```c
// Sanicova::CPad::reset @ 0x8599616

/* Sanicova::CPad::reset() */

void __thiscall Sanicova::CPad::reset(CPad *this)

{
  CPad CVar1;
  char cVar2;
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  int local_14;
  time_t local_10;
  
  cVar2 = isCertified(this);
  if (cVar2 != '\0') {
    local_14 = *(int *)(this + 0x28) + 0xb4;
    local_10 = time((time_t *)0x0);
    CVar1 = this[0x25];
    cMyTrace::cMyTrace(local_34,"void Sanicova::CPad::reset()",0x41,0);
    cMyTrace::operator()
              (local_34,"[Before]Goblin Certified check_time(%d), cur_time(%d), Certified(%d)",
               local_14,local_10,(uint)(byte)CVar1);
    if (local_14 < local_10) {
      setCertified(this,false);
    }
    CVar1 = this[0x25];
    cMyTrace::cMyTrace(local_24,"void Sanicova::CPad::reset()",0x4a,0);
    cMyTrace::operator()
              (local_24,"[After]Goblin Certified check_time(%d), cur_time(%d), Certified(%d)",
               local_14,local_10,(uint)(byte)CVar1);
  }
  return;
}
```
