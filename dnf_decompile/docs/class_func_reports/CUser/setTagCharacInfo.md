# setTagCharacInfo

`_ZN5CUser16setTagCharacInfoEijP15TAG_CHARAC_DATA`

`CUser::setTagCharacInfo(int, unsigned int, TAG_CHARAC_DATA*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08690098` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08690098  _ZN5CUser16setTagCharacInfoEijP15TAG_CHARAC_DATA
#           CUser::setTagCharacInfo(int, unsigned int, TAG_CHARAC_DATA*)
# range [0x08690098, 0x08690225]
08690098 +0x000:  push   %ebp
08690099 +0x001:  mov    %esp,%ebp
0869009b +0x003:  push   %ebx
0869009c +0x004:  sub    $0x14,%esp
0869009f +0x007:  cmpl   $0x0,0xc(%ebp)
086900a3 +0x00b:  js     086900c1 <+0x29>
086900a5 +0x00d:  mov    0x8(%ebp),%eax
086900a8 +0x010:  add    $0x796e8,%eax
086900ad +0x015:  mov    %eax,(%esp)
086900b0 +0x018:  call   081a0b9a <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x289>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x289
086900b5 +0x01d:  cmp    0xc(%ebp),%eax
086900b8 +0x020:  jle    086900c1 <+0x29>
086900ba +0x022:  mov    $0x1,%eax
086900bf +0x027:  jmp    086900c6 <+0x2e>
086900c1 +0x029:  mov    $0x0,%eax
086900c6 +0x02e:  test   %al,%al
086900c8 +0x030:  je     0869021a <+0x182>
086900ce +0x036:  mov    0xc(%ebp),%eax
086900d1 +0x039:  mov    0x8(%ebp),%edx
086900d4 +0x03c:  add    $0x796e8,%edx
086900da +0x042:  mov    %eax,0x4(%esp)
086900de +0x046:  mov    %edx,(%esp)
086900e1 +0x049:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
086900e6 +0x04e:  mov    (%eax),%eax
086900e8 +0x050:  cmp    0x10(%ebp),%eax
086900eb +0x053:  setne  %al
086900ee +0x056:  test   %al,%al
086900f0 +0x058:  je     086900fc <+0x64>
086900f2 +0x05a:  mov    $0x0,%eax
086900f7 +0x05f:  jmp    0869021f <+0x187>
086900fc +0x064:  mov    0xc(%ebp),%eax
086900ff +0x067:  mov    0x8(%ebp),%edx
08690102 +0x06a:  add    $0x796e8,%edx
08690108 +0x070:  mov    %eax,0x4(%esp)
0869010c +0x074:  mov    %edx,(%esp)
0869010f +0x077:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
08690114 +0x07c:  mov    0x14(%ebp),%edx
08690117 +0x07f:  mov    (%edx),%edx
08690119 +0x081:  mov    %edx,(%eax)
0869011b +0x083:  mov    0x14(%ebp),%eax
0869011e +0x086:  lea    0x4(%eax),%ebx
08690121 +0x089:  mov    0xc(%ebp),%eax
08690124 +0x08c:  mov    0x8(%ebp),%edx
08690127 +0x08f:  add    $0x796e8,%edx
0869012d +0x095:  mov    %eax,0x4(%esp)
08690131 +0x099:  mov    %edx,(%esp)
08690134 +0x09c:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
08690139 +0x0a1:  add    $0x4,%eax
0869013c +0x0a4:  movl   $0x1d,0x8(%esp)
08690144 +0x0ac:  mov    %ebx,0x4(%esp)
08690148 +0x0b0:  mov    %eax,(%esp)
0869014b +0x0b3:  call   0807d8d0 <_init+0x1c8>
08690150 +0x0b8:  mov    0xc(%ebp),%eax
08690153 +0x0bb:  mov    0x8(%ebp),%edx
08690156 +0x0be:  add    $0x796e8,%edx
0869015c +0x0c4:  mov    %eax,0x4(%esp)
08690160 +0x0c8:  mov    %edx,(%esp)
08690163 +0x0cb:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
08690168 +0x0d0:  mov    0x14(%ebp),%edx
0869016b +0x0d3:  movzbl 0x21(%edx),%edx
0869016f +0x0d7:  mov    %dl,0x26(%eax)
08690172 +0x0da:  mov    0xc(%ebp),%eax
08690175 +0x0dd:  mov    0x8(%ebp),%edx
08690178 +0x0e0:  add    $0x796e8,%edx
0869017e +0x0e6:  mov    %eax,0x4(%esp)
08690182 +0x0ea:  mov    %edx,(%esp)
08690185 +0x0ed:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0869018a +0x0f2:  mov    0x14(%ebp),%edx
0869018d +0x0f5:  movzwl 0x22(%edx),%edx
08690191 +0x0f9:  mov    %dx,0x27(%eax)
08690195 +0x0fd:  mov    0xc(%ebp),%eax
08690198 +0x100:  mov    0x8(%ebp),%edx
0869019b +0x103:  add    $0x796e8,%edx
086901a1 +0x109:  mov    %eax,0x4(%esp)
086901a5 +0x10d:  mov    %edx,(%esp)
086901a8 +0x110:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
086901ad +0x115:  mov    0x14(%ebp),%edx
086901b0 +0x118:  movzbl 0x24(%edx),%edx
086901b4 +0x11c:  mov    %dl,0x29(%eax)
086901b7 +0x11f:  mov    0xc(%ebp),%eax
086901ba +0x122:  mov    0x8(%ebp),%edx
086901bd +0x125:  add    $0x796e8,%edx
086901c3 +0x12b:  mov    %eax,0x4(%esp)
086901c7 +0x12f:  mov    %edx,(%esp)
086901ca +0x132:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
086901cf +0x137:  mov    0x14(%ebp),%edx
086901d2 +0x13a:  movzbl 0x25(%edx),%edx
086901d6 +0x13e:  mov    %dl,0x1239(%eax)
086901dc +0x144:  mov    0x14(%ebp),%eax
086901df +0x147:  lea    0x26(%eax),%ebx
086901e2 +0x14a:  mov    0xc(%ebp),%eax
086901e5 +0x14d:  mov    0x8(%ebp),%edx
086901e8 +0x150:  add    $0x796e8,%edx
086901ee +0x156:  mov    %eax,0x4(%esp)
086901f2 +0x15a:  mov    %edx,(%esp)
086901f5 +0x15d:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
086901fa +0x162:  add    $0x88,%eax
086901ff +0x167:  movl   $0x52,0x8(%esp)
08690207 +0x16f:  mov    %ebx,0x4(%esp)
0869020b +0x173:  mov    %eax,(%esp)
0869020e +0x176:  call   0807d8a0 <_init+0x198>
08690213 +0x17b:  mov    $0x1,%eax
08690218 +0x180:  jmp    0869021f <+0x187>
0869021a +0x182:  mov    $0x0,%eax
0869021f +0x187:  add    $0x14,%esp
08690222 +0x18a:  pop    %ebx
08690223 +0x18b:  pop    %ebp
08690224 +0x18c:  ret
08690225 +0x18d:  nop
```

## 反编译 C

```c
// CUser::setTagCharacInfo @ 0x8690098

/* CUser::setTagCharacInfo(int, unsigned int, TAG_CHARAC_DATA*) */

undefined4 __thiscall
CUser::setTagCharacInfo(CUser *this,int param_1,uint param_2,TAG_CHARAC_DATA *param_3)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if (-1 < param_1) {
    iVar2 = std::vector<_Charac_info,std::allocator<_Charac_info>>::size
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8));
    if (param_1 < iVar2) {
      bVar1 = true;
      goto LAB_086900c6;
    }
  }
  bVar1 = false;
LAB_086900c6:
  if (bVar1) {
    puVar3 = (uint *)std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                               ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                                (this + 0x796e8),param_1);
    if (*puVar3 == param_2) {
      puVar5 = (undefined4 *)
               std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                         ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                          param_1);
      *puVar5 = *(undefined4 *)param_3;
      iVar2 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      strncpy((char *)(iVar2 + 4),(char *)(param_3 + 4),0x1d);
      iVar2 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(TAG_CHARAC_DATA *)(iVar2 + 0x26) = param_3[0x21];
      iVar2 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined2 *)(iVar2 + 0x27) = *(undefined2 *)(param_3 + 0x22);
      iVar2 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(TAG_CHARAC_DATA *)(iVar2 + 0x29) = param_3[0x24];
      iVar2 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(TAG_CHARAC_DATA *)(iVar2 + 0x1239) = param_3[0x25];
      iVar2 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      memcpy((void *)(iVar2 + 0x88),param_3 + 0x26,0x52);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```
