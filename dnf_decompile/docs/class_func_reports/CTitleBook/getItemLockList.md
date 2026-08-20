# getItemLockList

`_ZN10CTitleBook15getItemLockListERSt6vectorIN9item_lock13stItemLockRefESaIS2_EE`

`CTitleBook::getItemLockList(std::vector<item_lock::stItemLockRef, std::allocator<item_lock::stItemLockRef> >&)`

| 类 | 地址 |
|---|---|
| `CTitleBook` | `0x086411ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086411ba  _ZN10CTitleBook15getItemLockListERSt6vectorIN9item_lock13stItemLockRefESaIS2_EE
#           CTitleBook::getItemLockList(std::vector<item_lock::stItemLockRef, std::allocator<item_lock::stItemLockRef> >&)
# range [0x086411ba, 0x08641259]
086411ba +0x00:  push   %ebp
086411bb +0x01:  mov    %esp,%ebp
086411bd +0x03:  sub    $0x28,%esp
086411c0 +0x06:  movb   $0x0,-0x11(%ebp)
086411c4 +0x0a:  movl   $0x0,-0x10(%ebp)
086411cb +0x11:  jmp    08641248 <+0x8e>
086411cd +0x13:  movl   $0x0,-0xc(%ebp)
086411d4 +0x1a:  jmp    08641230 <+0x76>
086411d6 +0x1c:  mov    -0x10(%ebp),%edx
086411d9 +0x1f:  mov    0x8(%ebp),%eax
086411dc +0x22:  add    $0x1ad0,%edx
086411e2 +0x28:  mov    0x8(%eax,%edx,4),%edx
086411e6 +0x2c:  mov    -0xc(%ebp),%eax
086411e9 +0x2f:  imul   $0x3d,%eax,%eax
086411ec +0x32:  lea    (%edx,%eax,1),%eax
086411ef +0x35:  add    $0x11,%eax
086411f2 +0x38:  mov    %eax,(%esp)
086411f5 +0x3b:  call   0828b5a8 <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x1d>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x1d
086411fa +0x40:  mov    %al,-0x11(%ebp)
086411fd +0x43:  cmpb   $0x0,-0x11(%ebp)
08641201 +0x47:  je     0864122c <+0x72>
08641203 +0x49:  movzbl -0x11(%ebp),%eax
08641207 +0x4d:  mov    %al,-0x16(%ebp)
0864120a +0x50:  mov    -0xc(%ebp),%eax
0864120d +0x53:  mov    %ax,-0x14(%ebp)
08641211 +0x57:  mov    -0x10(%ebp),%eax
08641214 +0x5a:  add    $0x13,%eax
08641217 +0x5d:  mov    %al,-0x15(%ebp)
0864121a +0x60:  lea    -0x16(%ebp),%eax
0864121d +0x63:  mov    %eax,0x4(%esp)
08641221 +0x67:  mov    0xc(%ebp),%eax
08641224 +0x6a:  mov    %eax,(%esp)
08641227 +0x6d:  call   084f158e <_GLOBAL__I__Z7getUserj+0x8540>  ; global constructors keyed to getUser(unsigned int)+0x8540
0864122c +0x72:  addl   $0x1,-0xc(%ebp)
08641230 +0x76:  mov    -0x10(%ebp),%eax
08641233 +0x79:  mov    &_ZL14TITLE_BOOK_MAX(,%eax,4),%eax
0864123a +0x80:  cmp    -0xc(%ebp),%eax
0864123d +0x83:  setg   %al
08641240 +0x86:  test   %al,%al
08641242 +0x88:  jne    086411d6 <+0x1c>
08641244 +0x8a:  addl   $0x1,-0x10(%ebp)
08641248 +0x8e:  cmpl   $0x3,-0x10(%ebp)
0864124c +0x92:  setle  %al
0864124f +0x95:  test   %al,%al
08641251 +0x97:  jne    086411cd <+0x13>
08641257 +0x9d:  leave
08641258 +0x9e:  ret
08641259 +0x9f:  nop
```

## 反编译 C

```c
// CTitleBook::getItemLockList @ 0x86411ba

/* CTitleBook::getItemLockList(std::vector<item_lock::stItemLockRef,
   std::allocator<item_lock::stItemLockRef> >&) */

void __thiscall CTitleBook::getItemLockList(CTitleBook *this,vector *param_1)

{
  stItemLockRef local_1a;
  char local_19;
  undefined2 local_18;
  stItemLockRef local_15;
  int local_14;
  int local_10;
  
  local_15 = (stItemLockRef)0x0;
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    for (local_10 = 0; local_10 < *(int *)(::TITLE_BOOK_MAX + local_14 * 4); local_10 = local_10 + 1
        ) {
      local_15 = (stItemLockRef)
                 stAmplifyOption_t::GetLock
                           ((stAmplifyOption_t *)
                            (*(int *)(this + (local_14 + 0x1ad0) * 4 + 8) + local_10 * 0x3d + 0x11))
      ;
      if (local_15 != (stItemLockRef)0x0) {
        local_18 = (undefined2)local_10;
        local_19 = (char)local_14 + '\x13';
        local_1a = local_15;
        std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>::push_back
                  ((vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>> *)
                   param_1,&local_1a);
      }
    }
  }
  return;
}
```
