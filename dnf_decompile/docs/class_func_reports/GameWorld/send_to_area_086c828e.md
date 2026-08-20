# send_to_area

`_ZN9GameWorld12send_to_areaEiiR11PacketGuardRSt6vectorIP5CUserSaIS4_EE`

`GameWorld::send_to_area(int, int, PacketGuard&, std::vector<CUser*, std::allocator<CUser*> >&)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c828e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c828e  _ZN9GameWorld12send_to_areaEiiR11PacketGuardRSt6vectorIP5CUserSaIS4_EE
#           GameWorld::send_to_area(int, int, PacketGuard&, std::vector<CUser*, std::allocator<CUser*> >&)
# range [0x086c828e, 0x086c8315]
086c828e +0x00:  push   %ebp
086c828f +0x01:  mov    %esp,%ebp
086c8291 +0x03:  sub    $0x28,%esp
086c8294 +0x06:  movl   $&g_townScriptFileList,(%esp)
086c829b +0x0d:  call   086d2cd8 <_GLOBAL__I_MAX_VILLAGE_NUM+0x1509>  ; global constructors keyed to MAX_VILLAGE_NUM+0x1509
086c82a0 +0x12:  cmp    0xc(%ebp),%eax
086c82a3 +0x15:  setl   %al
086c82a6 +0x18:  test   %al,%al
086c82a8 +0x1a:  jne    086c8306 <+0x78>
086c82aa +0x1c:  cmpl   $0x0,0xc(%ebp)
086c82ae +0x20:  js     086c8309 <+0x7b>
086c82b0 +0x22:  mov    &MAX_VILLAGE_NUM,%eax
086c82b5 +0x27:  cmp    %eax,0xc(%ebp)
086c82b8 +0x2a:  jge    086c830c <+0x7e>
086c82ba +0x2c:  mov    0x8(%ebp),%eax
086c82bd +0x2f:  mov    0x1c(%eax),%edx
086c82c0 +0x32:  mov    0xc(%ebp),%eax
086c82c3 +0x35:  imul   $0x34,%eax,%eax
086c82c6 +0x38:  lea    (%edx,%eax,1),%eax
086c82c9 +0x3b:  mov    %eax,-0xc(%ebp)
086c82cc +0x3e:  mov    -0xc(%ebp),%eax
086c82cf +0x41:  mov    0x24(%eax),%eax
086c82d2 +0x44:  cmp    0x10(%ebp),%eax
086c82d5 +0x47:  jle    086c830f <+0x81>
086c82d7 +0x49:  cmpl   $0x0,0x10(%ebp)
086c82db +0x4d:  js     086c8312 <+0x84>
086c82dd +0x4f:  mov    -0xc(%ebp),%eax
086c82e0 +0x52:  mov    0x28(%eax),%edx
086c82e3 +0x55:  mov    0x10(%ebp),%eax
086c82e6 +0x58:  imul   $0x98,%eax,%eax
086c82ec +0x5e:  add    %eax,%edx
086c82ee +0x60:  mov    0x18(%ebp),%eax
086c82f1 +0x63:  mov    %eax,0x8(%esp)
086c82f5 +0x67:  mov    0x14(%ebp),%eax
086c82f8 +0x6a:  mov    %eax,0x4(%esp)
086c82fc +0x6e:  mov    %edx,(%esp)
086c82ff +0x71:  call   086c2f2c <_ZN4Area11send_to_allER11PacketGuardRSt6vectorIP5CUserSaIS4_EE>  ; Area::send_to_all(PacketGuard&, std::vector<CUser*, std::allocator<CUser*> >&)
086c8304 +0x76:  jmp    086c8313 <+0x85>
086c8306 +0x78:  nop
086c8307 +0x79:  jmp    086c8313 <+0x85>
086c8309 +0x7b:  nop
086c830a +0x7c:  jmp    086c8313 <+0x85>
086c830c +0x7e:  nop
086c830d +0x7f:  jmp    086c8313 <+0x85>
086c830f +0x81:  nop
086c8310 +0x82:  jmp    086c8313 <+0x85>
086c8312 +0x84:  nop
086c8313 +0x85:  leave
086c8314 +0x86:  ret
086c8315 +0x87:  nop
```

## 反编译 C

```c
// GameWorld::send_to_area @ 0x86c828e

/* GameWorld::send_to_area(int, int, PacketGuard&, std::vector<CUser*, std::allocator<CUser*> >&) */

void __thiscall
GameWorld::send_to_area
          (GameWorld *this,int param_1,int param_2,PacketGuard *param_3,vector *param_4)

{
  int iVar1;
  
  iVar1 = std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>
          ::size((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>
                  *)g_townScriptFileList);
  if ((((param_1 <= iVar1) && (-1 < param_1)) && (param_1 < MAX_VILLAGE_NUM)) &&
     ((iVar1 = *(int *)(this + 0x1c) + param_1 * 0x34, param_2 < *(int *)(iVar1 + 0x24) &&
      (-1 < param_2)))) {
    Area::send_to_all((Area *)(*(int *)(iVar1 + 0x28) + param_2 * 0x98),param_3,param_4);
  }
  return;
}
```
