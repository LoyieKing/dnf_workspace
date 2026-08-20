# GM_CloseSouthernDale

`_ZN21CDailyScheduleManager20GM_CloseSouthernDaleEv`

`CDailyScheduleManager::GM_CloseSouthernDale()`

| 类 | 地址 |
|---|---|
| `CDailyScheduleManager` | `0x08126ad2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08126ad2  _ZN21CDailyScheduleManager20GM_CloseSouthernDaleEv
#           CDailyScheduleManager::GM_CloseSouthernDale()
# range [0x08126ad2, 0x08126c5b]
08126ad2 +0x000:  push   %ebp
08126ad3 +0x001:  mov    %esp,%ebp
08126ad5 +0x003:  push   %ebx
08126ad6 +0x004:  sub    $0x34,%esp
08126ad9 +0x007:  movl   $0x64,-0x1c(%ebp)
08126ae0 +0x00e:  movl   $0x5045,-0x18(%ebp)
08126ae7 +0x015:  mov    0x8(%ebp),%eax
08126aea +0x018:  add    $0xd8,%eax
08126aef +0x01d:  mov    %eax,(%esp)
08126af2 +0x020:  call   08127306 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x8f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x8f
08126af7 +0x025:  mov    %eax,-0x14(%ebp)
08126afa +0x028:  movl   $0x0,-0x10(%ebp)
08126b01 +0x02f:  jmp    08126b93 <+0xc1>
08126b06 +0x034:  mov    0x8(%ebp),%eax
08126b09 +0x037:  lea    0xd8(%eax),%edx
08126b0f +0x03d:  mov    -0x10(%ebp),%eax
08126b12 +0x040:  mov    %eax,0x4(%esp)
08126b16 +0x044:  mov    %edx,(%esp)
08126b19 +0x047:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
08126b1e +0x04c:  mov    0x8(%eax),%eax
08126b21 +0x04f:  cmp    $0x64,%eax
08126b24 +0x052:  jne    08126b57 <+0x85>
08126b26 +0x054:  mov    0x8(%ebp),%eax
08126b29 +0x057:  lea    0xd8(%eax),%edx
08126b2f +0x05d:  mov    -0x10(%ebp),%eax
08126b32 +0x060:  mov    %eax,0x4(%esp)
08126b36 +0x064:  mov    %edx,(%esp)
08126b39 +0x067:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
08126b3e +0x06c:  mov    0x4(%eax),%eax
08126b41 +0x06f:  test   %eax,%eax
08126b43 +0x071:  jne    08126b57 <+0x85>
08126b45 +0x073:  mov    0x8(%ebp),%eax
08126b48 +0x076:  mov    0x8(%eax),%eax
08126b4b +0x079:  cmp    $0x64,%eax
08126b4e +0x07c:  jne    08126b57 <+0x85>
08126b50 +0x07e:  mov    $0x1,%eax
08126b55 +0x083:  jmp    08126b5c <+0x8a>
08126b57 +0x085:  mov    $0x0,%eax
08126b5c +0x08a:  test   %al,%al
08126b5e +0x08c:  je     08126b8f <+0xbd>
08126b60 +0x08e:  mov    0x8(%ebp),%ebx
08126b63 +0x091:  mov    0x8(%ebp),%eax
08126b66 +0x094:  lea    0xd8(%eax),%edx
08126b6c +0x09a:  mov    -0x10(%ebp),%eax
08126b6f +0x09d:  mov    %eax,0x4(%esp)
08126b73 +0x0a1:  mov    %edx,(%esp)
08126b76 +0x0a4:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
08126b7b +0x0a9:  movl   $0x24,0x8(%esp)
08126b83 +0x0b1:  mov    %ebx,0x4(%esp)
08126b87 +0x0b5:  mov    %eax,(%esp)
08126b8a +0x0b8:  call   0807d8a0 <_init+0x198>
08126b8f +0x0bd:  addl   $0x1,-0x10(%ebp)
08126b93 +0x0c1:  mov    -0x10(%ebp),%eax
08126b96 +0x0c4:  cmp    -0x14(%ebp),%eax
08126b99 +0x0c7:  setb   %al
08126b9c +0x0ca:  test   %al,%al
08126b9e +0x0cc:  jne    08126b06 <+0x34>
08126ba4 +0x0d2:  movl   $0x0,-0xc(%ebp)
08126bab +0x0d9:  jmp    08126c45 <+0x173>
08126bb0 +0x0de:  mov    0x8(%ebp),%eax
08126bb3 +0x0e1:  lea    0xd8(%eax),%edx
08126bb9 +0x0e7:  mov    -0xc(%ebp),%eax
08126bbc +0x0ea:  mov    %eax,0x4(%esp)
08126bc0 +0x0ee:  mov    %edx,(%esp)
08126bc3 +0x0f1:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
08126bc8 +0x0f6:  mov    0x8(%eax),%eax
08126bcb +0x0f9:  cmp    $0x5045,%eax
08126bd0 +0x0fe:  jne    08126c06 <+0x134>
08126bd2 +0x100:  mov    0x8(%ebp),%eax
08126bd5 +0x103:  lea    0xd8(%eax),%edx
08126bdb +0x109:  mov    -0xc(%ebp),%eax
08126bde +0x10c:  mov    %eax,0x4(%esp)
08126be2 +0x110:  mov    %edx,(%esp)
08126be5 +0x113:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
08126bea +0x118:  mov    0x4(%eax),%eax
08126bed +0x11b:  cmp    $0x1,%eax
08126bf0 +0x11e:  jne    08126c06 <+0x134>
08126bf2 +0x120:  mov    0x8(%ebp),%eax
08126bf5 +0x123:  mov    0x2c(%eax),%eax
08126bf8 +0x126:  cmp    $0x5045,%eax
08126bfd +0x12b:  jne    08126c06 <+0x134>
08126bff +0x12d:  mov    $0x1,%eax
08126c04 +0x132:  jmp    08126c0b <+0x139>
08126c06 +0x134:  mov    $0x0,%eax
08126c0b +0x139:  test   %al,%al
08126c0d +0x13b:  je     08126c41 <+0x16f>
08126c0f +0x13d:  mov    0x8(%ebp),%eax
08126c12 +0x140:  lea    0x24(%eax),%ebx
08126c15 +0x143:  mov    0x8(%ebp),%eax
08126c18 +0x146:  lea    0xd8(%eax),%edx
08126c1e +0x14c:  mov    -0xc(%ebp),%eax
08126c21 +0x14f:  mov    %eax,0x4(%esp)
08126c25 +0x153:  mov    %edx,(%esp)
08126c28 +0x156:  call   081273b6 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x13f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x13f
08126c2d +0x15b:  movl   $0x24,0x8(%esp)
08126c35 +0x163:  mov    %ebx,0x4(%esp)
08126c39 +0x167:  mov    %eax,(%esp)
08126c3c +0x16a:  call   0807d8a0 <_init+0x198>
08126c41 +0x16f:  addl   $0x1,-0xc(%ebp)
08126c45 +0x173:  mov    -0xc(%ebp),%eax
08126c48 +0x176:  cmp    -0x14(%ebp),%eax
08126c4b +0x179:  setb   %al
08126c4e +0x17c:  test   %al,%al
08126c50 +0x17e:  jne    08126bb0 <+0xde>
08126c56 +0x184:  add    $0x34,%esp
08126c59 +0x187:  pop    %ebx
08126c5a +0x188:  pop    %ebp
08126c5b +0x189:  ret
```

## 反编译 C

```c
// CDailyScheduleManager::GM_CloseSouthernDale @ 0x8126ad2

/* CDailyScheduleManager::GM_CloseSouthernDale() */

void __thiscall CDailyScheduleManager::GM_CloseSouthernDale(CDailyScheduleManager *this)

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
    if (*(int *)(iVar3 + 8) == 100) {
      iVar3 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                        ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                         local_14);
      if ((*(int *)(iVar3 + 4) != 0) || (*(int *)(this + 8) != 100)) goto LAB_08126b57;
      bVar1 = true;
    }
    else {
LAB_08126b57:
      bVar1 = false;
    }
    if (bVar1) {
      pvVar4 = (void *)std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                                 ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)
                                  (this + 0xd8),local_14);
      memcpy(pvVar4,this,0x24);
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
    if (*(int *)(iVar3 + 8) == 0x5045) {
      iVar3 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                        ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                         local_10);
      if ((*(int *)(iVar3 + 4) != 1) || (*(int *)(this + 0x2c) != 0x5045)) goto LAB_08126c06;
      bVar1 = true;
    }
    else {
LAB_08126c06:
      bVar1 = false;
    }
    if (bVar1) {
      pvVar4 = (void *)std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                                 ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)
                                  (this + 0xd8),local_10);
      memcpy(pvVar4,this + 0x24,0x24);
    }
    local_10 = local_10 + 1;
  } while( true );
}
```
