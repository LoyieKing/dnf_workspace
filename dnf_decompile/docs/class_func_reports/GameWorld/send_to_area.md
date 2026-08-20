# send_to_area

`_ZN9GameWorld12send_to_areaEiiR11PacketGuard`

`GameWorld::send_to_area(int, int, PacketGuard&)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c8168` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c8168  _ZN9GameWorld12send_to_areaEiiR11PacketGuard
#           GameWorld::send_to_area(int, int, PacketGuard&)
# range [0x086c8168, 0x086c81f7]
086c8168 +0x00:  push   %ebp
086c8169 +0x01:  mov    %esp,%ebp
086c816b +0x03:  sub    $0x28,%esp
086c816e +0x06:  cmpl   $0x0,0xc(%ebp)
086c8172 +0x0a:  jne    086c817a <+0x12>
086c8174 +0x0c:  cmpl   $0x0,0x10(%ebp)
086c8178 +0x10:  je     086c81e5 <+0x7d>
086c817a +0x12:  movl   $&g_townScriptFileList,(%esp)
086c8181 +0x19:  call   086d2cd8 <_GLOBAL__I_MAX_VILLAGE_NUM+0x1509>  ; global constructors keyed to MAX_VILLAGE_NUM+0x1509
086c8186 +0x1e:  cmp    0xc(%ebp),%eax
086c8189 +0x21:  setl   %al
086c818c +0x24:  test   %al,%al
086c818e +0x26:  jne    086c81e8 <+0x80>
086c8190 +0x28:  cmpl   $0x0,0xc(%ebp)
086c8194 +0x2c:  jle    086c81eb <+0x83>
086c8196 +0x2e:  mov    &MAX_VILLAGE_NUM,%eax
086c819b +0x33:  cmp    %eax,0xc(%ebp)
086c819e +0x36:  jge    086c81ee <+0x86>
086c81a0 +0x38:  mov    0x8(%ebp),%eax
086c81a3 +0x3b:  mov    0x1c(%eax),%edx
086c81a6 +0x3e:  mov    0xc(%ebp),%eax
086c81a9 +0x41:  imul   $0x34,%eax,%eax
086c81ac +0x44:  lea    (%edx,%eax,1),%eax
086c81af +0x47:  mov    %eax,-0xc(%ebp)
086c81b2 +0x4a:  mov    -0xc(%ebp),%eax
086c81b5 +0x4d:  mov    0x24(%eax),%eax
086c81b8 +0x50:  cmp    0x10(%ebp),%eax
086c81bb +0x53:  jle    086c81f1 <+0x89>
086c81bd +0x55:  cmpl   $0x0,0x10(%ebp)
086c81c1 +0x59:  js     086c81f4 <+0x8c>
086c81c3 +0x5b:  mov    -0xc(%ebp),%eax
086c81c6 +0x5e:  mov    0x28(%eax),%edx
086c81c9 +0x61:  mov    0x10(%ebp),%eax
086c81cc +0x64:  imul   $0x98,%eax,%eax
086c81d2 +0x6a:  add    %eax,%edx
086c81d4 +0x6c:  mov    0x14(%ebp),%eax
086c81d7 +0x6f:  mov    %eax,0x4(%esp)
086c81db +0x73:  mov    %edx,(%esp)
086c81de +0x76:  call   086c2d2a <_ZN4Area11send_to_allER11PacketGuard>  ; Area::send_to_all(PacketGuard&)
086c81e3 +0x7b:  jmp    086c81f5 <+0x8d>
086c81e5 +0x7d:  nop
086c81e6 +0x7e:  jmp    086c81f5 <+0x8d>
086c81e8 +0x80:  nop
086c81e9 +0x81:  jmp    086c81f5 <+0x8d>
086c81eb +0x83:  nop
086c81ec +0x84:  jmp    086c81f5 <+0x8d>
086c81ee +0x86:  nop
086c81ef +0x87:  jmp    086c81f5 <+0x8d>
086c81f1 +0x89:  nop
086c81f2 +0x8a:  jmp    086c81f5 <+0x8d>
086c81f4 +0x8c:  nop
086c81f5 +0x8d:  leave
086c81f6 +0x8e:  ret
086c81f7 +0x8f:  nop
```

## 反编译 C

```c
// GameWorld::send_to_area @ 0x86c8168

/* GameWorld::send_to_area(int, int, PacketGuard&) */

void __thiscall
GameWorld::send_to_area(GameWorld *this,int param_1,int param_2,PacketGuard *param_3)

{
  int iVar1;
  
  if ((((param_1 != 0) || (param_2 != 0)) &&
      (iVar1 = std::
               map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>
               ::size((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>
                       *)g_townScriptFileList), param_1 <= iVar1)) &&
     (((0 < param_1 && (param_1 < MAX_VILLAGE_NUM)) &&
      ((iVar1 = *(int *)(this + 0x1c) + param_1 * 0x34, param_2 < *(int *)(iVar1 + 0x24) &&
       (-1 < param_2)))))) {
    Area::send_to_all((Area *)(*(int *)(iVar1 + 0x28) + param_2 * 0x98),param_3);
  }
  return;
}
```
