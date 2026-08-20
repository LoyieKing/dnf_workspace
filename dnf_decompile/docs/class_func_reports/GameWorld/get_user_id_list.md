# get_user_id_list

`_ZN9GameWorld16get_user_id_listEiiRSt6vectorItSaItEE`

`GameWorld::get_user_id_list(int, int, std::vector<unsigned short, std::allocator<unsigned short> >&)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c8316` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c8316  _ZN9GameWorld16get_user_id_listEiiRSt6vectorItSaItEE
#           GameWorld::get_user_id_list(int, int, std::vector<unsigned short, std::allocator<unsigned short> >&)
# range [0x086c8316, 0x086c8395]
086c8316 +0x00:  push   %ebp
086c8317 +0x01:  mov    %esp,%ebp
086c8319 +0x03:  sub    $0x28,%esp
086c831c +0x06:  movl   $&g_townScriptFileList,(%esp)
086c8323 +0x0d:  call   086d2cd8 <_GLOBAL__I_MAX_VILLAGE_NUM+0x1509>  ; global constructors keyed to MAX_VILLAGE_NUM+0x1509
086c8328 +0x12:  cmp    0xc(%ebp),%eax
086c832b +0x15:  setl   %al
086c832e +0x18:  test   %al,%al
086c8330 +0x1a:  jne    086c8387 <+0x71>
086c8332 +0x1c:  cmpl   $0x0,0xc(%ebp)
086c8336 +0x20:  js     086c838a <+0x74>
086c8338 +0x22:  mov    &MAX_VILLAGE_NUM,%eax
086c833d +0x27:  cmp    %eax,0xc(%ebp)
086c8340 +0x2a:  jge    086c838d <+0x77>
086c8342 +0x2c:  mov    0x8(%ebp),%eax
086c8345 +0x2f:  mov    0x1c(%eax),%edx
086c8348 +0x32:  mov    0xc(%ebp),%eax
086c834b +0x35:  imul   $0x34,%eax,%eax
086c834e +0x38:  lea    (%edx,%eax,1),%eax
086c8351 +0x3b:  mov    %eax,-0xc(%ebp)
086c8354 +0x3e:  mov    -0xc(%ebp),%eax
086c8357 +0x41:  mov    0x24(%eax),%eax
086c835a +0x44:  cmp    0x10(%ebp),%eax
086c835d +0x47:  jle    086c8390 <+0x7a>
086c835f +0x49:  cmpl   $0x0,0x10(%ebp)
086c8363 +0x4d:  js     086c8393 <+0x7d>
086c8365 +0x4f:  mov    -0xc(%ebp),%eax
086c8368 +0x52:  mov    0x28(%eax),%edx
086c836b +0x55:  mov    0x10(%ebp),%eax
086c836e +0x58:  imul   $0x98,%eax,%eax
086c8374 +0x5e:  add    %eax,%edx
086c8376 +0x60:  mov    0x14(%ebp),%eax
086c8379 +0x63:  mov    %eax,0x4(%esp)
086c837d +0x67:  mov    %edx,(%esp)
086c8380 +0x6a:  call   086c305e <_ZN4Area16get_user_id_listERSt6vectorItSaItEE>  ; Area::get_user_id_list(std::vector<unsigned short, std::allocator<unsigned short> >&)
086c8385 +0x6f:  jmp    086c8394 <+0x7e>
086c8387 +0x71:  nop
086c8388 +0x72:  jmp    086c8394 <+0x7e>
086c838a +0x74:  nop
086c838b +0x75:  jmp    086c8394 <+0x7e>
086c838d +0x77:  nop
086c838e +0x78:  jmp    086c8394 <+0x7e>
086c8390 +0x7a:  nop
086c8391 +0x7b:  jmp    086c8394 <+0x7e>
086c8393 +0x7d:  nop
086c8394 +0x7e:  leave
086c8395 +0x7f:  ret
```

## 反编译 C

```c
// GameWorld::get_user_id_list @ 0x86c8316

/* GameWorld::get_user_id_list(int, int, std::vector<unsigned short, std::allocator<unsigned short>
   >&) */

void __thiscall GameWorld::get_user_id_list(GameWorld *this,int param_1,int param_2,vector *param_3)

{
  int iVar1;
  
  iVar1 = std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>
          ::size((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>
                  *)g_townScriptFileList);
  if ((((param_1 <= iVar1) && (-1 < param_1)) && (param_1 < MAX_VILLAGE_NUM)) &&
     ((iVar1 = *(int *)(this + 0x1c) + param_1 * 0x34, param_2 < *(int *)(iVar1 + 0x24) &&
      (-1 < param_2)))) {
    Area::get_user_id_list((Area *)(*(int *)(iVar1 + 0x28) + param_2 * 0x98),param_3);
  }
  return;
}
```
