# send_to_vill

`_ZN9GameWorld12send_to_villEiR11PacketGuard`

`GameWorld::send_to_vill(int, PacketGuard&)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c7f48` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c7f48  _ZN9GameWorld12send_to_villEiR11PacketGuard
#           GameWorld::send_to_vill(int, PacketGuard&)
# range [0x086c7f48, 0x086c8007]
086c7f48 +0x00:  push   %ebp
086c7f49 +0x01:  mov    %esp,%ebp
086c7f4b +0x03:  sub    $0x28,%esp
086c7f4e +0x06:  cmpl   $0x0,0xc(%ebp)
086c7f52 +0x0a:  je     086c7ffb <+0xb3>
086c7f58 +0x10:  movl   $&g_townScriptFileList,(%esp)
086c7f5f +0x17:  call   086d2cd8 <_GLOBAL__I_MAX_VILLAGE_NUM+0x1509>  ; global constructors keyed to MAX_VILLAGE_NUM+0x1509
086c7f64 +0x1c:  cmp    0xc(%ebp),%eax
086c7f67 +0x1f:  setl   %al
086c7f6a +0x22:  test   %al,%al
086c7f6c +0x24:  jne    086c7ffe <+0xb6>
086c7f72 +0x2a:  cmpl   $0x0,0xc(%ebp)
086c7f76 +0x2e:  jle    086c8001 <+0xb9>
086c7f7c +0x34:  mov    &MAX_VILLAGE_NUM,%eax
086c7f81 +0x39:  cmp    %eax,0xc(%ebp)
086c7f84 +0x3c:  jge    086c8004 <+0xbc>
086c7f86 +0x3e:  mov    0x8(%ebp),%eax
086c7f89 +0x41:  mov    0x1c(%eax),%edx
086c7f8c +0x44:  mov    0xc(%ebp),%eax
086c7f8f +0x47:  imul   $0x34,%eax,%eax
086c7f92 +0x4a:  lea    (%edx,%eax,1),%eax
086c7f95 +0x4d:  mov    %eax,-0x10(%ebp)
086c7f98 +0x50:  movl   $0x0,-0xc(%ebp)
086c7f9f +0x57:  jmp    086c7fe9 <+0xa1>
086c7fa1 +0x59:  mov    -0x10(%ebp),%eax
086c7fa4 +0x5c:  mov    0x28(%eax),%edx
086c7fa7 +0x5f:  mov    -0xc(%ebp),%eax
086c7faa +0x62:  imul   $0x98,%eax,%eax
086c7fb0 +0x68:  lea    (%edx,%eax,1),%eax
086c7fb3 +0x6b:  mov    %eax,(%esp)
086c7fb6 +0x6e:  call   086d238e <_GLOBAL__I_MAX_VILLAGE_NUM+0xbbf>  ; global constructors keyed to MAX_VILLAGE_NUM+0xbbf
086c7fbb +0x73:  cmp    $0xffffffff,%eax
086c7fbe +0x76:  setne  %al
086c7fc1 +0x79:  test   %al,%al
086c7fc3 +0x7b:  je     086c7fe5 <+0x9d>
086c7fc5 +0x7d:  mov    -0x10(%ebp),%eax
086c7fc8 +0x80:  mov    0x28(%eax),%edx
086c7fcb +0x83:  mov    -0xc(%ebp),%eax
086c7fce +0x86:  imul   $0x98,%eax,%eax
086c7fd4 +0x8c:  add    %eax,%edx
086c7fd6 +0x8e:  mov    0x10(%ebp),%eax
086c7fd9 +0x91:  mov    %eax,0x4(%esp)
086c7fdd +0x95:  mov    %edx,(%esp)
086c7fe0 +0x98:  call   086c2d2a <_ZN4Area11send_to_allER11PacketGuard>  ; Area::send_to_all(PacketGuard&)
086c7fe5 +0x9d:  addl   $0x1,-0xc(%ebp)
086c7fe9 +0xa1:  mov    -0x10(%ebp),%eax
086c7fec +0xa4:  mov    0x24(%eax),%eax
086c7fef +0xa7:  cmp    -0xc(%ebp),%eax
086c7ff2 +0xaa:  setg   %al
086c7ff5 +0xad:  test   %al,%al
086c7ff7 +0xaf:  jne    086c7fa1 <+0x59>
086c7ff9 +0xb1:  jmp    086c8005 <+0xbd>
086c7ffb +0xb3:  nop
086c7ffc +0xb4:  jmp    086c8005 <+0xbd>
086c7ffe +0xb6:  nop
086c7fff +0xb7:  jmp    086c8005 <+0xbd>
086c8001 +0xb9:  nop
086c8002 +0xba:  jmp    086c8005 <+0xbd>
086c8004 +0xbc:  nop
086c8005 +0xbd:  leave
086c8006 +0xbe:  ret
086c8007 +0xbf:  nop
```

## 反编译 C

```c
// GameWorld::send_to_vill @ 0x86c7f48

/* GameWorld::send_to_vill(int, PacketGuard&) */

void __thiscall GameWorld::send_to_vill(GameWorld *this,int param_1,PacketGuard *param_2)

{
  int iVar1;
  int iVar2;
  int local_10;
  
  if ((((param_1 != 0) &&
       (iVar1 = std::
                map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>
                ::size((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>
                        *)g_townScriptFileList), param_1 <= iVar1)) && (0 < param_1)) &&
     (param_1 < MAX_VILLAGE_NUM)) {
    iVar1 = *(int *)(this + 0x1c) + param_1 * 0x34;
    for (local_10 = 0; local_10 < *(int *)(iVar1 + 0x24); local_10 = local_10 + 1) {
      iVar2 = Area::get_area_index((Area *)(*(int *)(iVar1 + 0x28) + local_10 * 0x98));
      if (iVar2 != -1) {
        Area::send_to_all((Area *)(*(int *)(iVar1 + 0x28) + local_10 * 0x98),param_2);
      }
    }
  }
  return;
}
```
