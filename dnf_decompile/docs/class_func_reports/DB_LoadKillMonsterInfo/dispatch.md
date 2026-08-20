# dispatch

`_ZN22DB_LoadKillMonsterInfo8dispatchEiiP6Stream`

`DB_LoadKillMonsterInfo::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_LoadKillMonsterInfo` | `0x084414e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084414e0  _ZN22DB_LoadKillMonsterInfo8dispatchEiiP6Stream
#           DB_LoadKillMonsterInfo::dispatch(int, int, Stream*)
# range [0x084414e0, 0x08441599]
084414e0 +0x00:  push   %ebp
084414e1 +0x01:  mov    %esp,%ebp
084414e3 +0x03:  push   %ebx
084414e4 +0x04:  sub    $0x34,%esp
084414e7 +0x07:  movb   $0x0,-0xd(%ebp)
084414eb +0x0b:  mov    0x14(%ebp),%eax
084414ee +0x0e:  mov    %eax,(%esp)
084414f1 +0x11:  call   08453d76 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x698c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x698c
084414f6 +0x16:  mov    %eax,-0xc(%ebp)
084414f9 +0x19:  cmpl   $0x0,-0xc(%ebp)
084414fd +0x1d:  jne    08441509 <+0x29>
084414ff +0x1f:  mov    $0x0,%eax
08441504 +0x24:  jmp    08441594 <+0xb4>
08441509 +0x29:  mov    -0xc(%ebp),%eax
0844150c +0x2c:  mov    %eax,0x4(%esp)
08441510 +0x30:  mov    0x8(%ebp),%eax
08441513 +0x33:  mov    %eax,(%esp)
08441516 +0x36:  call   0844159a <_ZN22DB_LoadKillMonsterInfo15LoadMonsterInfoEP26SIG_LOAD_KILL_MONSTER_INFO>  ; DB_LoadKillMonsterInfo::LoadMonsterInfo(SIG_LOAD_KILL_MONSTER_INFO*)
0844151b +0x3b:  xor    $0x1,%eax
0844151e +0x3e:  test   %al,%al
08441520 +0x40:  je     0844156c <+0x8c>
08441522 +0x42:  mov    -0xc(%ebp),%eax
08441525 +0x45:  mov    0xafc8(%eax),%ebx
0844152b +0x4b:  movl   $0x5,0xc(%esp)
08441533 +0x53:  movl   $0xa04b,0x8(%esp)
0844153b +0x5b:  movl   $&_ZZN22DB_LoadKillMonsterInfo8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08441543 +0x63:  lea    -0x20(%ebp),%eax
08441546 +0x66:  mov    %eax,(%esp)
08441549 +0x69:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0844154e +0x6e:  mov    %ebx,0x8(%esp)
08441552 +0x72:  movl   $"DB_LoadKillMonsterInfo::LoadMonsterInfo ERROR charac_no=%u",0x4(%esp)
0844155a +0x7a:  lea    -0x20(%ebp),%eax
0844155d +0x7d:  mov    %eax,(%esp)
08441560 +0x80:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08441565 +0x85:  mov    $0x0,%eax
0844156a +0x8a:  jmp    08441594 <+0xb4>
0844156c +0x8c:  mov    -0xc(%ebp),%eax
0844156f +0x8f:  mov    %eax,0xc(%esp)
08441573 +0x93:  mov    0x10(%ebp),%eax
08441576 +0x96:  mov    %eax,0x8(%esp)
0844157a +0x9a:  mov    0xc(%ebp),%eax
0844157d +0x9d:  mov    %eax,0x4(%esp)
08441581 +0xa1:  mov    0x8(%ebp),%eax
08441584 +0xa4:  mov    %eax,(%esp)
08441587 +0xa7:  call   084419ac <_ZN22DB_LoadKillMonsterInfo10SendResultEiiP26SIG_LOAD_KILL_MONSTER_INFO>  ; DB_LoadKillMonsterInfo::SendResult(int, int, SIG_LOAD_KILL_MONSTER_INFO*)
0844158c +0xac:  mov    %al,-0xd(%ebp)
0844158f +0xaf:  mov    $0x1,%eax
08441594 +0xb4:  add    $0x34,%esp
08441597 +0xb7:  pop    %ebx
08441598 +0xb8:  pop    %ebp
08441599 +0xb9:  ret
```

## 反编译 C

```c
// DB_LoadKillMonsterInfo::dispatch @ 0x84414e0

/* DB_LoadKillMonsterInfo::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadKillMonsterInfo::dispatch
          (DB_LoadKillMonsterInfo *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  cMyTrace local_24 [19];
  undefined1 local_11;
  SIG_LOAD_KILL_MONSTER_INFO *local_10;
  
  local_11 = 0;
  local_10 = Stream::GetOutBuffer<SIG_LOAD_KILL_MONSTER_INFO>(param_3);
  if (local_10 == (SIG_LOAD_KILL_MONSTER_INFO *)0x0) {
    uVar2 = 0;
  }
  else {
    cVar1 = LoadMonsterInfo(this,local_10);
    if (cVar1 == '\x01') {
      SendResult(this,param_1,param_2,local_10);
      uVar2 = 1;
    }
    else {
      uVar2 = *(undefined4 *)(local_10 + 45000);
      cMyTrace::cMyTrace(local_24,"virtual bool DB_LoadKillMonsterInfo::dispatch(int, int, Stream*)"
                         ,0xa04b,5);
      cMyTrace::operator()
                (local_24,"DB_LoadKillMonsterInfo::LoadMonsterInfo ERROR charac_no=%u",uVar2);
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
