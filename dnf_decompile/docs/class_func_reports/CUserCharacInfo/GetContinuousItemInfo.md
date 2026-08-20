# GetContinuousItemInfo

`_ZNK15CUserCharacInfo21GetContinuousItemInfoEP12SIG_LOAD_ETC`

`CUserCharacInfo::GetContinuousItemInfo(SIG_LOAD_ETC*) const`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08677f24` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08677f24  _ZNK15CUserCharacInfo21GetContinuousItemInfoEP12SIG_LOAD_ETC
#           CUserCharacInfo::GetContinuousItemInfo(SIG_LOAD_ETC*) const
# range [0x08677f24, 0x08678083]
08677f24 +0x000:  push   %ebp
08677f25 +0x001:  mov    %esp,%ebp
08677f27 +0x003:  push   %ebx
08677f28 +0x004:  sub    $0x34,%esp
08677f2b +0x007:  mov    0xc(%ebp),%eax
08677f2e +0x00a:  mov    0x4(%eax),%edx
08677f31 +0x00d:  mov    0xc(%ebp),%eax
08677f34 +0x010:  mov    %edx,0x2308(%eax)
08677f3a +0x016:  mov    0xc(%ebp),%eax
08677f3d +0x019:  mov    0x4(%eax),%edx
08677f40 +0x01c:  mov    0xc(%ebp),%eax
08677f43 +0x01f:  mov    %edx,0x24a0(%eax)
08677f49 +0x025:  mov    0x8(%ebp),%eax
08677f4c +0x028:  mov    %eax,(%esp)
08677f4f +0x02b:  call   08696a34 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3289>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3289
08677f54 +0x030:  mov    %eax,-0x1c(%ebp)
08677f57 +0x033:  mov    -0x1c(%ebp),%eax
08677f5a +0x036:  mov    %eax,(%esp)
08677f5d +0x039:  call   0863d2c0 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x17d1>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x17d1
08677f62 +0x03e:  mov    %eax,%edx
08677f64 +0x040:  mov    0xc(%ebp),%eax
08677f67 +0x043:  mov    %dl,0x230c(%eax)
08677f6d +0x049:  movl   $0x0,-0x18(%ebp)
08677f74 +0x050:  movl   $0x0,-0x10(%ebp)
08677f7b +0x057:  jmp    08677fce <+0xaa>
08677f7d +0x059:  mov    -0x18(%ebp),%ebx
08677f80 +0x05c:  mov    -0x10(%ebp),%eax
08677f83 +0x05f:  mov    %eax,0x4(%esp)
08677f87 +0x063:  mov    -0x1c(%ebp),%eax
08677f8a +0x066:  mov    %eax,(%esp)
08677f8d +0x069:  call   0863d2dc <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x17ed>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x17ed
08677f92 +0x06e:  mov    (%eax),%edx
08677f94 +0x070:  mov    0xc(%ebp),%eax
08677f97 +0x073:  lea    0x460(%ebx),%ecx
08677f9d +0x079:  mov    %edx,0x10(%eax,%ecx,8)
08677fa1 +0x07d:  mov    -0x18(%ebp),%ebx
08677fa4 +0x080:  mov    -0x10(%ebp),%eax
08677fa7 +0x083:  mov    %eax,0x4(%esp)
08677fab +0x087:  mov    -0x1c(%ebp),%eax
08677fae +0x08a:  mov    %eax,(%esp)
08677fb1 +0x08d:  call   0863d2dc <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x17ed>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x17ed
08677fb6 +0x092:  mov    0x4(%eax),%edx
08677fb9 +0x095:  mov    0xc(%ebp),%eax
08677fbc +0x098:  lea    0x460(%ebx),%ecx
08677fc2 +0x09e:  mov    %edx,0x14(%eax,%ecx,8)
08677fc6 +0x0a2:  addl   $0x1,-0x18(%ebp)
08677fca +0x0a6:  addl   $0x1,-0x10(%ebp)
08677fce +0x0aa:  mov    -0x1c(%ebp),%eax
08677fd1 +0x0ad:  mov    %eax,(%esp)
08677fd4 +0x0b0:  call   0863d2c0 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x17d1>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x17d1
08677fd9 +0x0b5:  cmp    -0x10(%ebp),%eax
08677fdc +0x0b8:  seta   %al
08677fdf +0x0bb:  test   %al,%al
08677fe1 +0x0bd:  jne    08677f7d <+0x59>
08677fe3 +0x0bf:  movl   $0x0,-0x18(%ebp)
08677fea +0x0c6:  mov    0x8(%ebp),%eax
08677fed +0x0c9:  mov    %eax,(%esp)
08677ff0 +0x0cc:  call   085d19fa <_GLOBAL__I__ZN10expert_job10CAlchemistC2Ev+0x41>  ; global constructors keyed to expert_job::CAlchemist::CAlchemist()+0x41
08677ff5 +0x0d1:  mov    %eax,-0x14(%ebp)
08677ff8 +0x0d4:  mov    -0x14(%ebp),%eax
08677ffb +0x0d7:  mov    %eax,(%esp)
08677ffe +0x0da:  call   0863d2c0 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x17d1>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x17d1
08678003 +0x0df:  mov    %eax,%edx
08678005 +0x0e1:  mov    0xc(%ebp),%eax
08678008 +0x0e4:  mov    %dl,0x24a4(%eax)
0867800e +0x0ea:  movl   $0x0,-0xc(%ebp)
08678015 +0x0f1:  jmp    08678068 <+0x144>
08678017 +0x0f3:  mov    -0x18(%ebp),%ebx
0867801a +0x0f6:  mov    -0xc(%ebp),%eax
0867801d +0x0f9:  mov    %eax,0x4(%esp)
08678021 +0x0fd:  mov    -0x14(%ebp),%eax
08678024 +0x100:  mov    %eax,(%esp)
08678027 +0x103:  call   0863d2dc <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x17ed>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x17ed
0867802c +0x108:  mov    (%eax),%edx
0867802e +0x10a:  mov    0xc(%ebp),%eax
08678031 +0x10d:  lea    0x494(%ebx),%ecx
08678037 +0x113:  mov    %edx,0x8(%eax,%ecx,8)
0867803b +0x117:  mov    -0x18(%ebp),%ebx
0867803e +0x11a:  mov    -0xc(%ebp),%eax
08678041 +0x11d:  mov    %eax,0x4(%esp)
08678045 +0x121:  mov    -0x14(%ebp),%eax
08678048 +0x124:  mov    %eax,(%esp)
0867804b +0x127:  call   0863d2dc <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x17ed>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x17ed
08678050 +0x12c:  mov    0x4(%eax),%edx
08678053 +0x12f:  mov    0xc(%ebp),%eax
08678056 +0x132:  lea    0x494(%ebx),%ecx
0867805c +0x138:  mov    %edx,0xc(%eax,%ecx,8)
08678060 +0x13c:  addl   $0x1,-0x18(%ebp)
08678064 +0x140:  addl   $0x1,-0xc(%ebp)
08678068 +0x144:  mov    -0x14(%ebp),%eax
0867806b +0x147:  mov    %eax,(%esp)
0867806e +0x14a:  call   0863d2c0 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x17d1>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x17d1
08678073 +0x14f:  cmp    -0xc(%ebp),%eax
08678076 +0x152:  seta   %al
08678079 +0x155:  test   %al,%al
0867807b +0x157:  jne    08678017 <+0xf3>
0867807d +0x159:  add    $0x34,%esp
08678080 +0x15c:  pop    %ebx
08678081 +0x15d:  pop    %ebp
08678082 +0x15e:  ret
08678083 +0x15f:  nop
```

## 反编译 C

```c
// CUserCharacInfo::GetContinuousItemInfo @ 0x8677f24

/* CUserCharacInfo::GetContinuousItemInfo(SIG_LOAD_ETC*) const */

void __thiscall CUserCharacInfo::GetContinuousItemInfo(CUserCharacInfo *this,SIG_LOAD_ETC *param_1)

{
  SIG_LOAD_ETC SVar1;
  vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>> *pvVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_1c;
  uint local_14;
  uint local_10;
  
  *(undefined4 *)(param_1 + 0x2308) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x24a0) = *(undefined4 *)(param_1 + 4);
  pvVar2 = (vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>> *)
           GetCurCharacCoolTimeItemListR(this);
  SVar1 = (SIG_LOAD_ETC)
          std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::size(pvVar2);
  param_1[0x230c] = SVar1;
  local_1c = 0;
  local_14 = 0;
  while( true ) {
    uVar3 = std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::size(pvVar2);
    if (uVar3 <= local_14) break;
    puVar4 = (undefined4 *)
             std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::operator[]
                       (pvVar2,local_14);
    *(undefined4 *)(param_1 + (local_1c + 0x460) * 8 + 0x10) = *puVar4;
    iVar5 = std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::operator[]
                      (pvVar2,local_14);
    *(undefined4 *)(param_1 + (local_1c + 0x460) * 8 + 0x14) = *(undefined4 *)(iVar5 + 4);
    local_1c = local_1c + 1;
    local_14 = local_14 + 1;
  }
  local_1c = 0;
  pvVar2 = (vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>> *)
           GetCurCharacEffectItemListR(this);
  SVar1 = (SIG_LOAD_ETC)
          std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::size(pvVar2);
  param_1[0x24a4] = SVar1;
  local_10 = 0;
  while( true ) {
    uVar3 = std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::size(pvVar2);
    if (uVar3 <= local_10) break;
    puVar4 = (undefined4 *)
             std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::operator[]
                       (pvVar2,local_10);
    *(undefined4 *)(param_1 + (local_1c + 0x494) * 8 + 8) = *puVar4;
    iVar5 = std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::operator[]
                      (pvVar2,local_10);
    *(undefined4 *)(param_1 + (local_1c + 0x494) * 8 + 0xc) = *(undefined4 *)(iVar5 + 4);
    local_1c = local_1c + 1;
    local_10 = local_10 + 1;
  }
  return;
}
```
