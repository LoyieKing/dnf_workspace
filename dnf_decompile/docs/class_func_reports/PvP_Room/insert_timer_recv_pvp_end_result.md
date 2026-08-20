# insert_timer_recv_pvp_end_result

`_ZN8PvP_Room32insert_timer_recv_pvp_end_resultEv`

`PvP_Room::insert_timer_recv_pvp_end_result()`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085dc23c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dc23c  _ZN8PvP_Room32insert_timer_recv_pvp_end_resultEv
#           PvP_Room::insert_timer_recv_pvp_end_result()
# range [0x085dc23c, 0x085dc2cb]
085dc23c +0x00:  push   %ebp
085dc23d +0x01:  mov    %esp,%ebp
085dc23f +0x03:  push   %edi
085dc240 +0x04:  push   %esi
085dc241 +0x05:  push   %ebx
085dc242 +0x06:  sub    $0x3c,%esp
085dc245 +0x09:  movl   $0x3d,0x4(%esp)
085dc24d +0x11:  mov    0x8(%ebp),%eax
085dc250 +0x14:  mov    %eax,(%esp)
085dc253 +0x17:  call   08568d90 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x75a>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x75a
085dc258 +0x1c:  mov    %eax,%edi
085dc25a +0x1e:  mov    0x8(%ebp),%eax
085dc25d +0x21:  mov    0x6e4(%eax),%eax
085dc263 +0x27:  mov    (%eax),%eax
085dc265 +0x29:  add    $0x7c,%eax
085dc268 +0x2c:  mov    (%eax),%edx
085dc26a +0x2e:  mov    0x8(%ebp),%eax
085dc26d +0x31:  mov    0x6e4(%eax),%eax
085dc273 +0x37:  mov    %eax,(%esp)
085dc276 +0x3a:  call   *%edx
085dc278 +0x3c:  mov    %eax,%ebx
085dc27a +0x3e:  mov    %eax,%esi
085dc27c +0x40:  sar    $0x1f,%esi
085dc27f +0x43:  mov    0x8(%ebp),%eax
085dc282 +0x46:  mov    (%eax),%eax
085dc284 +0x48:  mov    %eax,-0x1c(%ebp)
085dc287 +0x4b:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
085dc28c +0x50:  movl   $0x0,0x1c(%esp)
085dc294 +0x58:  mov    %edi,0x18(%esp)
085dc298 +0x5c:  mov    %ebx,0x10(%esp)
085dc29c +0x60:  mov    %esi,0x14(%esp)
085dc2a0 +0x64:  movl   $0x3d,0xc(%esp)
085dc2a8 +0x6c:  mov    -0x1c(%ebp),%edx
085dc2ab +0x6f:  mov    %edx,0x8(%esp)
085dc2af +0x73:  movl   $0x1,0x4(%esp)
085dc2b7 +0x7b:  mov    %eax,(%esp)
085dc2ba +0x7e:  call   08630e60 <_ZN10TimerQueue23InsertTimerInMilisecondEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGExij>  ; TimerQueue::InsertTimerInMilisecond(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, long long, int, unsigned int)
085dc2bf +0x83:  mov    $0x1,%eax
085dc2c4 +0x88:  add    $0x3c,%esp
085dc2c7 +0x8b:  pop    %ebx
085dc2c8 +0x8c:  pop    %esi
085dc2c9 +0x8d:  pop    %edi
085dc2ca +0x8e:  pop    %ebp
085dc2cb +0x8f:  ret
```

## 反编译 C

```c
// PvP_Room::insert_timer_recv_pvp_end_result @ 0x85dc23c

/* PvP_Room::insert_timer_recv_pvp_end_result() */

undefined4 __thiscall PvP_Room::insert_timer_recv_pvp_end_result(PvP_Room *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = gen_timer_key(this,0x3d);
  iVar3 = (**(code **)(**(int **)(this + 0x6e4) + 0x7c))(*(undefined4 *)(this + 0x6e4));
  uVar1 = *(undefined4 *)this;
  uVar4 = G_TimerQueue();
  TimerQueue::InsertTimerInMilisecond(uVar4,1,uVar1,0x3d,iVar3,iVar3 >> 0x1f,uVar2,0);
  return 1;
}
```
