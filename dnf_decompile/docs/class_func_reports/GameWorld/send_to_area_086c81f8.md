# send_to_area

`_ZN9GameWorld12send_to_areaEiiR11PacketGuardP7CBelong`

`GameWorld::send_to_area(int, int, PacketGuard&, CBelong*)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c81f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c81f8  _ZN9GameWorld12send_to_areaEiiR11PacketGuardP7CBelong
#           GameWorld::send_to_area(int, int, PacketGuard&, CBelong*)
# range [0x086c81f8, 0x086c828d]
086c81f8 +0x00:  push   %ebp
086c81f9 +0x01:  mov    %esp,%ebp
086c81fb +0x03:  sub    $0x28,%esp
086c81fe +0x06:  cmpl   $0x0,0xc(%ebp)
086c8202 +0x0a:  jne    086c820a <+0x12>
086c8204 +0x0c:  cmpl   $0x0,0x10(%ebp)
086c8208 +0x10:  je     086c827c <+0x84>
086c820a +0x12:  movl   $&g_townScriptFileList,(%esp)
086c8211 +0x19:  call   086d2cd8 <_GLOBAL__I_MAX_VILLAGE_NUM+0x1509>  ; global constructors keyed to MAX_VILLAGE_NUM+0x1509
086c8216 +0x1e:  cmp    0xc(%ebp),%eax
086c8219 +0x21:  setl   %al
086c821c +0x24:  test   %al,%al
086c821e +0x26:  jne    086c827f <+0x87>
086c8220 +0x28:  cmpl   $0x0,0xc(%ebp)
086c8224 +0x2c:  jle    086c8282 <+0x8a>
086c8226 +0x2e:  mov    &MAX_VILLAGE_NUM,%eax
086c822b +0x33:  cmp    %eax,0xc(%ebp)
086c822e +0x36:  jge    086c8285 <+0x8d>
086c8230 +0x38:  mov    0x8(%ebp),%eax
086c8233 +0x3b:  mov    0x1c(%eax),%edx
086c8236 +0x3e:  mov    0xc(%ebp),%eax
086c8239 +0x41:  imul   $0x34,%eax,%eax
086c823c +0x44:  lea    (%edx,%eax,1),%eax
086c823f +0x47:  mov    %eax,-0xc(%ebp)
086c8242 +0x4a:  mov    -0xc(%ebp),%eax
086c8245 +0x4d:  mov    0x24(%eax),%eax
086c8248 +0x50:  cmp    0x10(%ebp),%eax
086c824b +0x53:  jle    086c8288 <+0x90>
086c824d +0x55:  cmpl   $0x0,0x10(%ebp)
086c8251 +0x59:  js     086c828b <+0x93>
086c8253 +0x5b:  mov    -0xc(%ebp),%eax
086c8256 +0x5e:  mov    0x28(%eax),%edx
086c8259 +0x61:  mov    0x10(%ebp),%eax
086c825c +0x64:  imul   $0x98,%eax,%eax
086c8262 +0x6a:  add    %eax,%edx
086c8264 +0x6c:  mov    0x18(%ebp),%eax
086c8267 +0x6f:  mov    %eax,0x8(%esp)
086c826b +0x73:  mov    0x14(%ebp),%eax
086c826e +0x76:  mov    %eax,0x4(%esp)
086c8272 +0x7a:  mov    %edx,(%esp)
086c8275 +0x7d:  call   086c2e1e <_ZN4Area10send_groupER11PacketGuardP7CBelong>  ; Area::send_group(PacketGuard&, CBelong*)
086c827a +0x82:  jmp    086c828c <+0x94>
086c827c +0x84:  nop
086c827d +0x85:  jmp    086c828c <+0x94>
086c827f +0x87:  nop
086c8280 +0x88:  jmp    086c828c <+0x94>
086c8282 +0x8a:  nop
086c8283 +0x8b:  jmp    086c828c <+0x94>
086c8285 +0x8d:  nop
086c8286 +0x8e:  jmp    086c828c <+0x94>
086c8288 +0x90:  nop
086c8289 +0x91:  jmp    086c828c <+0x94>
086c828b +0x93:  nop
086c828c +0x94:  leave
086c828d +0x95:  ret
```

## 反编译 C

```c
// GameWorld::send_to_area @ 0x86c81f8

/* GameWorld::send_to_area(int, int, PacketGuard&, CBelong*) */

void __thiscall
GameWorld::send_to_area
          (GameWorld *this,int param_1,int param_2,PacketGuard *param_3,CBelong *param_4)

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
    Area::send_group((Area *)(*(int *)(iVar1 + 0x28) + param_2 * 0x98),param_3,param_4);
  }
  return;
}
```
