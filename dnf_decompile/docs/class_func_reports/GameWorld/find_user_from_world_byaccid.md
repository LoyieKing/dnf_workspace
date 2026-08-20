# find_user_from_world_byaccid

`_ZN9GameWorld28find_user_from_world_byaccidEj`

`GameWorld::find_user_from_world_byaccid(unsigned int)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c4d40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c4d40  _ZN9GameWorld28find_user_from_world_byaccidEj
#           GameWorld::find_user_from_world_byaccid(unsigned int)
# range [0x086c4d40, 0x086c4e0b]
086c4d40 +0x00:  push   %ebp
086c4d41 +0x01:  mov    %esp,%ebp
086c4d43 +0x03:  sub    $0x38,%esp
086c4d46 +0x06:  movl   $0x0,-0xc(%ebp)
086c4d4d +0x0d:  mov    0xc(%ebp),%eax
086c4d50 +0x10:  mov    %eax,0x4(%esp)
086c4d54 +0x14:  mov    0x8(%ebp),%eax
086c4d57 +0x17:  mov    %eax,(%esp)
086c4d5a +0x1a:  call   086c4c24 <_ZN9GameWorld12find_sessionEj>  ; GameWorld::find_session(unsigned int)
086c4d5f +0x1f:  mov    %eax,-0x10(%ebp)
086c4d62 +0x22:  cmpl   $0x0,-0x10(%ebp)
086c4d66 +0x26:  sete   %al
086c4d69 +0x29:  test   %al,%al
086c4d6b +0x2b:  je     086c4db0 <+0x70>
086c4d6d +0x2d:  movl   $0x0,0x4(%esp)
086c4d75 +0x35:  mov    0xc(%ebp),%eax
086c4d78 +0x38:  mov    %eax,(%esp)
086c4d7b +0x3b:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
086c4d80 +0x40:  mov    %eax,0x14(%esp)
086c4d84 +0x44:  movl   $"send_buddy_conn_list() : find_session fail - 없는 세션 요청 ACCID : %s",0x10(%esp)
086c4d8c +0x4c:  movl   $0x4f2,0xc(%esp)
086c4d94 +0x54:  movl   $&_ZZN9GameWorld28find_user_from_world_byaccidEjE19__PRETTY_FUNCTION__,0x8(%esp)
086c4d9c +0x5c:  movl   $"world.cpp",0x4(%esp)
086c4da4 +0x64:  movl   $0x1,(%esp)
086c4dab +0x6b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086c4db0 +0x70:  mov    -0x10(%ebp),%eax
086c4db3 +0x73:  movzwl %ax,%eax
086c4db6 +0x76:  mov    %eax,0x4(%esp)
086c4dba +0x7a:  mov    0x8(%ebp),%eax
086c4dbd +0x7d:  mov    %eax,(%esp)
086c4dc0 +0x80:  call   086c4b9c <_ZN9GameWorld15find_from_worldEt>  ; GameWorld::find_from_world(unsigned short)
086c4dc5 +0x85:  mov    %eax,-0xc(%ebp)
086c4dc8 +0x88:  cmpl   $0x0,-0xc(%ebp)
086c4dcc +0x8c:  sete   %al
086c4dcf +0x8f:  test   %al,%al
086c4dd1 +0x91:  je     086c4e06 <+0xc6>
086c4dd3 +0x93:  mov    -0x10(%ebp),%eax
086c4dd6 +0x96:  mov    %eax,0x14(%esp)
086c4dda +0x9a:  movl   $"find_from_world fail - 없는 Unique 요청 unique :  %d",0x10(%esp)
086c4de2 +0xa2:  movl   $0x4f5,0xc(%esp)
086c4dea +0xaa:  movl   $&_ZZN9GameWorld28find_user_from_world_byaccidEjE19__PRETTY_FUNCTION__,0x8(%esp)
086c4df2 +0xb2:  movl   $"world.cpp",0x4(%esp)
086c4dfa +0xba:  movl   $0x1,(%esp)
086c4e01 +0xc1:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086c4e06 +0xc6:  mov    -0xc(%ebp),%eax
086c4e09 +0xc9:  leave
086c4e0a +0xca:  ret
086c4e0b +0xcb:  nop
```

## 反编译 C

```c
// GameWorld::find_user_from_world_byaccid @ 0x86c4d40

/* GameWorld::find_user_from_world_byaccid(unsigned int) */

int __thiscall GameWorld::find_user_from_world_byaccid(GameWorld *this,uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = find_session((uint)this);
  if (iVar1 == 0) {
    uVar2 = NumberToString(param_1,0);
    LogManager::logFormat
              (1,"world.cpp",
               "CUser* GameWorld::find_user_from_world_byaccid(memberIdentificationNumber_t)",0x4f2,
               &DAT_08cfb6c0,uVar2);
  }
  iVar3 = find_from_world(this,(ushort)iVar1);
  if (iVar3 == 0) {
    LogManager::logFormat
              (1,"world.cpp",
               "CUser* GameWorld::find_user_from_world_byaccid(memberIdentificationNumber_t)",0x4f5,
               &DAT_08cfb708,iVar1);
  }
  return iVar3;
}
```
