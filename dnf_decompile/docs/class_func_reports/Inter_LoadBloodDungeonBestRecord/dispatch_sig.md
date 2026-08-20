# dispatch_sig

`_ZN32Inter_LoadBloodDungeonBestRecord12dispatch_sigEP5CUserPci`

`Inter_LoadBloodDungeonBestRecord::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LoadBloodDungeonBestRecord` | `0x084d82f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d82f6  _ZN32Inter_LoadBloodDungeonBestRecord12dispatch_sigEP5CUserPci
#           Inter_LoadBloodDungeonBestRecord::dispatch_sig(CUser*, char*, int)
# range [0x084d82f6, 0x084d83d1]
084d82f6 +0x00:  push   %ebp
084d82f7 +0x01:  mov    %esp,%ebp
084d82f9 +0x03:  push   %ebx
084d82fa +0x04:  sub    $0x34,%esp
084d82fd +0x07:  mov    0xc(%ebp),%eax
084d8300 +0x0a:  mov    %eax,(%esp)
084d8303 +0x0d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084d8308 +0x12:  test   %eax,%eax
084d830a +0x14:  sete   %al
084d830d +0x17:  test   %al,%al
084d830f +0x19:  je     084d831b <+0x25>
084d8311 +0x1b:  mov    $0x3edd,%eax
084d8316 +0x20:  jmp    084d83cc <+0xd6>
084d831b +0x25:  mov    0x10(%ebp),%eax
084d831e +0x28:  mov    %eax,-0x10(%ebp)
084d8321 +0x2b:  mov    -0x10(%ebp),%eax
084d8324 +0x2e:  mov    (%eax),%eax
084d8326 +0x30:  mov    %eax,0x4(%esp)
084d832a +0x34:  mov    0xc(%ebp),%eax
084d832d +0x37:  mov    %eax,(%esp)
084d8330 +0x3a:  call   0864df12 <_ZNK5CUser14get_charac_idxEj>  ; CUser::get_charac_idx(unsigned int) const
084d8335 +0x3f:  mov    %eax,-0xc(%ebp)
084d8338 +0x42:  cmpl   $0x0,-0xc(%ebp)
084d833c +0x46:  jns    084d8348 <+0x52>
084d833e +0x48:  mov    $0x3ee3,%eax
084d8343 +0x4d:  jmp    084d83cc <+0xd6>
084d8348 +0x52:  mov    -0xc(%ebp),%eax
084d834b +0x55:  mov    0xc(%ebp),%edx
084d834e +0x58:  add    $0x796e8,%edx
084d8354 +0x5e:  mov    %eax,0x4(%esp)
084d8358 +0x62:  mov    %edx,(%esp)
084d835b +0x65:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
084d8360 +0x6a:  mov    (%eax),%edx
084d8362 +0x6c:  mov    -0x10(%ebp),%eax
084d8365 +0x6f:  mov    (%eax),%eax
084d8367 +0x71:  cmp    %eax,%edx
084d8369 +0x73:  setne  %al
084d836c +0x76:  test   %al,%al
084d836e +0x78:  je     084d8377 <+0x81>
084d8370 +0x7a:  mov    $0x3ee5,%eax
084d8375 +0x7f:  jmp    084d83cc <+0xd6>
084d8377 +0x81:  mov    -0xc(%ebp),%eax
084d837a +0x84:  mov    0xc(%ebp),%edx
084d837d +0x87:  add    $0x796e8,%edx
084d8383 +0x8d:  mov    %eax,0x4(%esp)
084d8387 +0x91:  mov    %edx,(%esp)
084d838a +0x94:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
084d838f +0x99:  mov    -0x10(%ebp),%edx
084d8392 +0x9c:  mov    (%edx),%edx
084d8394 +0x9e:  mov    %edx,(%eax)
084d8396 +0xa0:  mov    -0x10(%ebp),%eax
084d8399 +0xa3:  mov    0xc(%eax),%ebx
084d839c +0xa6:  mov    -0x10(%ebp),%eax
084d839f +0xa9:  mov    0x8(%eax),%ecx
084d83a2 +0xac:  mov    -0x10(%ebp),%eax
084d83a5 +0xaf:  mov    0x4(%eax),%edx
084d83a8 +0xb2:  mov    0xc(%ebp),%eax
084d83ab +0xb5:  movl   $0x1,0x10(%esp)
084d83b3 +0xbd:  mov    %ebx,0xc(%esp)
084d83b7 +0xc1:  mov    %ecx,0x8(%esp)
084d83bb +0xc5:  mov    %edx,0x4(%esp)
084d83bf +0xc9:  mov    %eax,(%esp)
084d83c2 +0xcc:  call   08687fd8 <_ZN15CUserCharacInfo18setBloodBestRecordEjiib>  ; CUserCharacInfo::setBloodBestRecord(unsigned int, int, int, bool)
084d83c7 +0xd1:  mov    $0x0,%eax
084d83cc +0xd6:  add    $0x34,%esp
084d83cf +0xd9:  pop    %ebx
084d83d0 +0xda:  pop    %ebp
084d83d1 +0xdb:  ret
```

## 反编译 C

```c
// Inter_LoadBloodDungeonBestRecord::dispatch_sig @ 0x84d82f6

/* Inter_LoadBloodDungeonBestRecord::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadBloodDungeonBestRecord::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 == 0) {
    uVar2 = 0x3edd;
  }
  else {
    uVar3 = CUser::get_charac_idx((CUser *)param_2,*(uint *)param_3);
    if ((int)uVar3 < 0) {
      uVar2 = 0x3ee3;
    }
    else {
      piVar4 = (int *)std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                                ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                                 (param_2 + 0x796e8),uVar3);
      if (*piVar4 == *(int *)param_3) {
        puVar5 = (undefined4 *)
                 std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                           ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_2 + 0x796e8)
                            ,uVar3);
        *puVar5 = *(undefined4 *)param_3;
        CUserCharacInfo::setBloodBestRecord
                  ((CUserCharacInfo *)param_2,*(uint *)(param_3 + 4),*(int *)(param_3 + 8),
                   *(int *)(param_3 + 0xc),true);
        uVar2 = 0;
      }
      else {
        uVar2 = 0x3ee5;
      }
    }
  }
  return uVar2;
}
```
