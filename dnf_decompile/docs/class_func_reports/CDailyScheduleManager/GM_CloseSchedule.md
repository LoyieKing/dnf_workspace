# GM_CloseSchedule

`_ZN21CDailyScheduleManager16GM_CloseScheduleEi18_DailyScheduleTypeR14_DailySchedule`

`CDailyScheduleManager::GM_CloseSchedule(int, _DailyScheduleType, _DailySchedule&)`

| 类 | 地址 |
|---|---|
| `CDailyScheduleManager` | `0x0812707c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812707c  _ZN21CDailyScheduleManager16GM_CloseScheduleEi18_DailyScheduleTypeR14_DailySchedule
#           CDailyScheduleManager::GM_CloseSchedule(int, _DailyScheduleType, _DailySchedule&)
# range [0x0812707c, 0x08127236]
0812707c +0x000:  push   %ebp
0812707d +0x001:  mov    %esp,%ebp
0812707f +0x003:  push   %ebx
08127080 +0x004:  sub    $0x24,%esp
08127083 +0x007:  mov    0x8(%ebp),%eax
08127086 +0x00a:  add    $0xd8,%eax
0812708b +0x00f:  mov    %eax,(%esp)
0812708e +0x012:  call   08127306 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x8f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x8f
08127093 +0x017:  mov    %eax,-0x14(%ebp)
08127096 +0x01a:  movl   $0x0,-0x10(%ebp)
0812709d +0x021:  jmp    08127171 <+0xf5>
081270a2 +0x026:  mov    0xc(%ebp),%ebx
081270a5 +0x029:  mov    0x8(%ebp),%eax
081270a8 +0x02c:  lea    0xd8(%eax),%edx
081270ae +0x032:  mov    -0x10(%ebp),%eax
081270b1 +0x035:  mov    %eax,0x4(%esp)
081270b5 +0x039:  mov    %edx,(%esp)
081270b8 +0x03c:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
081270bd +0x041:  mov    0x8(%eax),%eax
081270c0 +0x044:  cmp    %eax,%ebx
081270c2 +0x046:  jne    081270f8 <+0x7c>
081270c4 +0x048:  mov    0x8(%ebp),%eax
081270c7 +0x04b:  lea    0xd8(%eax),%edx
081270cd +0x051:  mov    -0x10(%ebp),%eax
081270d0 +0x054:  mov    %eax,0x4(%esp)
081270d4 +0x058:  mov    %edx,(%esp)
081270d7 +0x05b:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
081270dc +0x060:  mov    0x4(%eax),%eax
081270df +0x063:  cmp    0x10(%ebp),%eax
081270e2 +0x066:  jne    081270f8 <+0x7c>
081270e4 +0x068:  mov    0xc(%ebp),%edx
081270e7 +0x06b:  mov    0x14(%ebp),%eax
081270ea +0x06e:  mov    0x8(%eax),%eax
081270ed +0x071:  cmp    %eax,%edx
081270ef +0x073:  jne    081270f8 <+0x7c>
081270f1 +0x075:  mov    $0x1,%eax
081270f6 +0x07a:  jmp    081270fd <+0x81>
081270f8 +0x07c:  mov    $0x0,%eax
081270fd +0x081:  test   %al,%al
081270ff +0x083:  je     0812716d <+0xf1>
08127101 +0x085:  mov    0x8(%ebp),%eax
08127104 +0x088:  lea    0xd8(%eax),%edx
0812710a +0x08e:  mov    -0x10(%ebp),%eax
0812710d +0x091:  mov    %eax,0x4(%esp)
08127111 +0x095:  mov    %edx,(%esp)
08127114 +0x098:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
08127119 +0x09d:  mov    0x20(%eax),%eax
0812711c +0x0a0:  cmp    $0x1,%eax
0812711f +0x0a3:  sete   %al
08127122 +0x0a6:  test   %al,%al
08127124 +0x0a8:  je     08127132 <+0xb6>
08127126 +0x0aa:  mov    0x14(%ebp),%eax
08127129 +0x0ad:  movl   $0x1,0x20(%eax)
08127130 +0x0b4:  jmp    0812713c <+0xc0>
08127132 +0x0b6:  mov    0x14(%ebp),%eax
08127135 +0x0b9:  movl   $0x0,0x20(%eax)
0812713c +0x0c0:  mov    0x8(%ebp),%eax
0812713f +0x0c3:  lea    0xd8(%eax),%edx
08127145 +0x0c9:  mov    -0x10(%ebp),%eax
08127148 +0x0cc:  mov    %eax,0x4(%esp)
0812714c +0x0d0:  mov    %edx,(%esp)
0812714f +0x0d3:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
08127154 +0x0d8:  movl   $0x24,0x8(%esp)
0812715c +0x0e0:  mov    0x14(%ebp),%edx
0812715f +0x0e3:  mov    %edx,0x4(%esp)
08127163 +0x0e7:  mov    %eax,(%esp)
08127166 +0x0ea:  call   0807d8a0 <_init+0x198>
0812716b +0x0ef:  jmp    08127182 <+0x106>
0812716d +0x0f1:  addl   $0x1,-0x10(%ebp)
08127171 +0x0f5:  mov    -0x10(%ebp),%eax
08127174 +0x0f8:  cmp    -0x14(%ebp),%eax
08127177 +0x0fb:  setb   %al
0812717a +0x0fe:  test   %al,%al
0812717c +0x100:  jne    081270a2 <+0x26>
08127182 +0x106:  movl   $0x0,-0xc(%ebp)
08127189 +0x10d:  jmp    08127220 <+0x1a4>
0812718e +0x112:  mov    0xc(%ebp),%ebx
08127191 +0x115:  mov    0x8(%ebp),%eax
08127194 +0x118:  lea    0xd8(%eax),%edx
0812719a +0x11e:  mov    -0xc(%ebp),%eax
0812719d +0x121:  mov    %eax,0x4(%esp)
081271a1 +0x125:  mov    %edx,(%esp)
081271a4 +0x128:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
081271a9 +0x12d:  mov    0x8(%eax),%eax
081271ac +0x130:  cmp    %eax,%ebx
081271ae +0x132:  jne    081271e4 <+0x168>
081271b0 +0x134:  mov    0x8(%ebp),%eax
081271b3 +0x137:  lea    0xd8(%eax),%edx
081271b9 +0x13d:  mov    -0xc(%ebp),%eax
081271bc +0x140:  mov    %eax,0x4(%esp)
081271c0 +0x144:  mov    %edx,(%esp)
081271c3 +0x147:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
081271c8 +0x14c:  mov    0x4(%eax),%eax
081271cb +0x14f:  cmp    0xc(%ebp),%eax
081271ce +0x152:  jne    081271e4 <+0x168>
081271d0 +0x154:  mov    0xc(%ebp),%edx
081271d3 +0x157:  mov    0x14(%ebp),%eax
081271d6 +0x15a:  mov    0x8(%eax),%eax
081271d9 +0x15d:  cmp    %eax,%edx
081271db +0x15f:  jne    081271e4 <+0x168>
081271dd +0x161:  mov    $0x1,%eax
081271e2 +0x166:  jmp    081271e9 <+0x16d>
081271e4 +0x168:  mov    $0x0,%eax
081271e9 +0x16d:  test   %al,%al
081271eb +0x16f:  je     0812721c <+0x1a0>
081271ed +0x171:  mov    0x8(%ebp),%eax
081271f0 +0x174:  lea    0xd8(%eax),%edx
081271f6 +0x17a:  mov    -0xc(%ebp),%eax
081271f9 +0x17d:  mov    %eax,0x4(%esp)
081271fd +0x181:  mov    %edx,(%esp)
08127200 +0x184:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
08127205 +0x189:  movl   $0x24,0x8(%esp)
0812720d +0x191:  mov    0x14(%ebp),%edx
08127210 +0x194:  mov    %edx,0x4(%esp)
08127214 +0x198:  mov    %eax,(%esp)
08127217 +0x19b:  call   0807d8a0 <_init+0x198>
0812721c +0x1a0:  addl   $0x1,-0xc(%ebp)
08127220 +0x1a4:  mov    -0xc(%ebp),%eax
08127223 +0x1a7:  cmp    -0x14(%ebp),%eax
08127226 +0x1aa:  setb   %al
08127229 +0x1ad:  test   %al,%al
0812722b +0x1af:  jne    0812718e <+0x112>
08127231 +0x1b5:  add    $0x24,%esp
08127234 +0x1b8:  pop    %ebx
08127235 +0x1b9:  pop    %ebp
08127236 +0x1ba:  ret
```

## 反编译 C

```c
// CDailyScheduleManager::GM_CloseSchedule @ 0x812707c

/* CDailyScheduleManager::GM_CloseSchedule(int, _DailyScheduleType, _DailySchedule&) */

void __thiscall
CDailyScheduleManager::GM_CloseSchedule
          (CDailyScheduleManager *this,int param_1,int param_3,void *param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  uint local_14;
  uint local_10;
  
  uVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::size
                    ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8));
  for (local_14 = 0; local_14 < uVar2; local_14 = local_14 + 1) {
    iVar3 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                      ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                       local_14);
    if (param_1 == *(int *)(iVar3 + 8)) {
      iVar3 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                        ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                         local_14);
      if ((*(int *)(iVar3 + 4) != param_3) || (param_1 != *(int *)((int)param_4 + 8)))
      goto LAB_081270f8;
      bVar1 = true;
    }
    else {
LAB_081270f8:
      bVar1 = false;
    }
    if (bVar1) {
      iVar3 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                        ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                         local_14);
      if (*(int *)(iVar3 + 0x20) == 1) {
        *(undefined4 *)((int)param_4 + 0x20) = 1;
      }
      else {
        *(undefined4 *)((int)param_4 + 0x20) = 0;
      }
      pvVar4 = (void *)std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                                 ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)
                                  (this + 0xd8),local_14);
      memcpy(pvVar4,param_4,0x24);
      break;
    }
  }
  local_10 = 0;
  do {
    if (uVar2 <= local_10) {
      return;
    }
    iVar3 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                      ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                       local_10);
    if (param_1 == *(int *)(iVar3 + 8)) {
      iVar3 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                        ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                         local_10);
      if ((*(int *)(iVar3 + 4) != param_1) || (param_1 != *(int *)((int)param_4 + 8)))
      goto LAB_081271e4;
      bVar1 = true;
    }
    else {
LAB_081271e4:
      bVar1 = false;
    }
    if (bVar1) {
      pvVar4 = (void *)std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                                 ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)
                                  (this + 0xd8),local_10);
      memcpy(pvVar4,param_4,0x24);
    }
    local_10 = local_10 + 1;
  } while( true );
}
```
