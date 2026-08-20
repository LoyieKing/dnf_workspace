# GetUserAvatar

`_ZN16DB_LoadInventory13GetUserAvatarEP18SIG_LOAD_INVENTORY`

`DB_LoadInventory::GetUserAvatar(SIG_LOAD_INVENTORY*)`

| 类 | 地址 |
|---|---|
| `DB_LoadInventory` | `0x0840bd3a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840bd3a  _ZN16DB_LoadInventory13GetUserAvatarEP18SIG_LOAD_INVENTORY
#           DB_LoadInventory::GetUserAvatar(SIG_LOAD_INVENTORY*)
# range [0x0840bd3a, 0x0840be89]
0840bd3a +0x000:  push   %ebp
0840bd3b +0x001:  mov    %esp,%ebp
0840bd3d +0x003:  push   %esi
0840bd3e +0x004:  push   %ebx
0840bd3f +0x005:  sub    $0x50,%esp
0840bd42 +0x008:  mov    0xc(%ebp),%eax
0840bd45 +0x00b:  lea    0xcd1c(%eax),%esi
0840bd4b +0x011:  mov    0xc(%ebp),%eax
0840bd4e +0x014:  lea    0xa3a1(%eax),%ebx
0840bd54 +0x01a:  mov    0xc(%ebp),%eax
0840bd57 +0x01d:  lea    0x4044(%eax),%ecx
0840bd5d +0x023:  mov    0xc(%ebp),%eax
0840bd60 +0x026:  lea    0xcd20(%eax),%edx
0840bd66 +0x02c:  mov    0xc(%ebp),%eax
0840bd69 +0x02f:  mov    0x4(%eax),%eax
0840bd6c +0x032:  mov    %esi,0x10(%esp)
0840bd70 +0x036:  mov    %ebx,0xc(%esp)
0840bd74 +0x03a:  mov    %ecx,0x8(%esp)
0840bd78 +0x03e:  mov    %edx,0x4(%esp)
0840bd7c +0x042:  mov    %eax,(%esp)
0840bd7f +0x045:  call   0840be8a <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri>  ; DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)
0840bd84 +0x04a:  mov    %al,-0x9(%ebp)
0840bd87 +0x04d:  movzbl -0x9(%ebp),%eax
0840bd8b +0x051:  xor    $0x1,%eax
0840bd8e +0x054:  test   %al,%al
0840bd90 +0x056:  je     0840bddc <+0xa2>
0840bd92 +0x058:  mov    0xc(%ebp),%eax
0840bd95 +0x05b:  mov    0x4(%eax),%ebx
0840bd98 +0x05e:  movl   $0x5,0xc(%esp)
0840bda0 +0x066:  movl   $0x25cb,0x8(%esp)
0840bda8 +0x06e:  movl   $&_ZZN16DB_LoadInventory13GetUserAvatarEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
0840bdb0 +0x076:  lea    -0x2c(%ebp),%eax
0840bdb3 +0x079:  mov    %eax,(%esp)
0840bdb6 +0x07c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840bdbb +0x081:  mov    %ebx,0x8(%esp)
0840bdbf +0x085:  movl   $"DB_LoadInventory::_GetUserAvatar ERROR::charac_no(%d)",0x4(%esp)
0840bdc7 +0x08d:  lea    -0x2c(%ebp),%eax
0840bdca +0x090:  mov    %eax,(%esp)
0840bdcd +0x093:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840bdd2 +0x098:  mov    $0x0,%eax
0840bdd7 +0x09d:  jmp    0840be83 <+0x149>
0840bddc +0x0a2:  mov    0xc(%ebp),%eax
0840bddf +0x0a5:  mov    0x8(%eax),%eax
0840bde2 +0x0a8:  test   %eax,%eax
0840bde4 +0x0aa:  je     0840be7e <+0x144>
0840bdea +0x0b0:  mov    0xc(%ebp),%eax
0840bded +0x0b3:  lea    0x1e4f(%eax),%esi
0840bdf3 +0x0b9:  mov    0xc(%ebp),%eax
0840bdf6 +0x0bc:  lea    0xc(%eax),%ebx
0840bdf9 +0x0bf:  mov    0xc(%ebp),%eax
0840bdfc +0x0c2:  lea    0x54a(%eax),%ecx
0840be02 +0x0c8:  mov    0xc(%ebp),%eax
0840be05 +0x0cb:  lea    0x1e53(%eax),%edx
0840be0b +0x0d1:  mov    0xc(%ebp),%eax
0840be0e +0x0d4:  mov    0x8(%eax),%eax
0840be11 +0x0d7:  mov    %esi,0x10(%esp)
0840be15 +0x0db:  mov    %ebx,0xc(%esp)
0840be19 +0x0df:  mov    %ecx,0x8(%esp)
0840be1d +0x0e3:  mov    %edx,0x4(%esp)
0840be21 +0x0e7:  mov    %eax,(%esp)
0840be24 +0x0ea:  call   0840be8a <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri>  ; DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)
0840be29 +0x0ef:  mov    %al,-0x9(%ebp)
0840be2c +0x0f2:  movzbl -0x9(%ebp),%eax
0840be30 +0x0f6:  xor    $0x1,%eax
0840be33 +0x0f9:  test   %al,%al
0840be35 +0x0fb:  je     0840be7e <+0x144>
0840be37 +0x0fd:  mov    0xc(%ebp),%eax
0840be3a +0x100:  mov    0x8(%eax),%ebx
0840be3d +0x103:  movl   $0x5,0xc(%esp)
0840be45 +0x10b:  movl   $0x25d7,0x8(%esp)
0840be4d +0x113:  movl   $&_ZZN16DB_LoadInventory13GetUserAvatarEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
0840be55 +0x11b:  lea    -0x1c(%ebp),%eax
0840be58 +0x11e:  mov    %eax,(%esp)
0840be5b +0x121:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840be60 +0x126:  mov    %ebx,0x8(%esp)
0840be64 +0x12a:  movl   $"DB_LoadInventory::_GetUserAvatar ERROR::tag_charac_no(%d)",0x4(%esp)
0840be6c +0x132:  lea    -0x1c(%ebp),%eax
0840be6f +0x135:  mov    %eax,(%esp)
0840be72 +0x138:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840be77 +0x13d:  mov    $0x0,%eax
0840be7c +0x142:  jmp    0840be83 <+0x149>
0840be7e +0x144:  mov    $0x1,%eax
0840be83 +0x149:  add    $0x50,%esp
0840be86 +0x14c:  pop    %ebx
0840be87 +0x14d:  pop    %esi
0840be88 +0x14e:  pop    %ebp
0840be89 +0x14f:  ret
```

## 反编译 C

```c
// DB_LoadInventory::GetUserAvatar @ 0x840bd3a

/* DB_LoadInventory::GetUserAvatar(SIG_LOAD_INVENTORY*) */

undefined4 __thiscall
DB_LoadInventory::GetUserAvatar(DB_LoadInventory *this,SIG_LOAD_INVENTORY *param_1)

{
  undefined4 uVar1;
  cMyTrace local_30 [16];
  cMyTrace local_20 [19];
  char local_d;
  
  local_d = _GetUserAvatar(*(uint *)(param_1 + 4),(AvatarDetailInfo *)(param_1 + 0xcd20),
                           (Inven_Item *)(param_1 + 0x4044),(Inven_Item *)(param_1 + 0xa3a1),
                           (int *)(param_1 + 0xcd1c));
  if (local_d == '\x01') {
    if ((*(int *)(param_1 + 8) != 0) &&
       (local_d = _GetUserAvatar(*(uint *)(param_1 + 8),(AvatarDetailInfo *)(param_1 + 0x1e53),
                                 (Inven_Item *)(param_1 + 0x54a),(Inven_Item *)(param_1 + 0xc),
                                 (int *)(param_1 + 0x1e4f)), local_d != '\x01')) {
      uVar1 = *(undefined4 *)(param_1 + 8);
      cMyTrace::cMyTrace(local_20,"bool DB_LoadInventory::GetUserAvatar(SIG_LOAD_INVENTORY*)",0x25d7
                         ,5);
      cMyTrace::operator()
                (local_20,"DB_LoadInventory::_GetUserAvatar ERROR::tag_charac_no(%d)",uVar1);
      return 0;
    }
    uVar1 = 1;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 4);
    cMyTrace::cMyTrace(local_30,"bool DB_LoadInventory::GetUserAvatar(SIG_LOAD_INVENTORY*)",0x25cb,5
                      );
    cMyTrace::operator()(local_30,"DB_LoadInventory::_GetUserAvatar ERROR::charac_no(%d)",uVar1);
    uVar1 = 0;
  }
  return uVar1;
}
```
