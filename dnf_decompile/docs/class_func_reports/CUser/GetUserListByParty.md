# GetUserListByParty

`_ZN5CUser18GetUserListByPartyERSt6vectorIPS_SaIS1_EE`

`CUser::GetUserListByParty(std::vector<CUser*, std::allocator<CUser*> >&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868056a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868056a  _ZN5CUser18GetUserListByPartyERSt6vectorIPS_SaIS1_EE
#           CUser::GetUserListByParty(std::vector<CUser*, std::allocator<CUser*> >&)
# range [0x0868056a, 0x086805ee]
0868056a +0x00:  push   %ebp
0868056b +0x01:  mov    %esp,%ebp
0868056d +0x03:  sub    $0x28,%esp
08680570 +0x06:  mov    0x8(%ebp),%eax
08680573 +0x09:  mov    %eax,-0x14(%ebp)
08680576 +0x0c:  lea    -0x14(%ebp),%eax
08680579 +0x0f:  mov    %eax,0x4(%esp)
0868057d +0x13:  mov    0xc(%ebp),%eax
08680580 +0x16:  mov    %eax,(%esp)
08680583 +0x19:  call   08551088 <_GLOBAL__I__ZN10CLuckPointC2Ev+0xdb>  ; global constructors keyed to CLuckPoint::CLuckPoint()+0xdb
08680588 +0x1e:  mov    0x8(%ebp),%eax
0868058b +0x21:  mov    %eax,(%esp)
0868058e +0x24:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
08680593 +0x29:  mov    %eax,-0x10(%ebp)
08680596 +0x2c:  cmpl   $0x0,-0x10(%ebp)
0868059a +0x30:  je     086805ea <+0x80>
0868059c +0x32:  movl   $0x0,-0xc(%ebp)
086805a3 +0x39:  jmp    086805df <+0x75>
086805a5 +0x3b:  mov    -0xc(%ebp),%eax
086805a8 +0x3e:  mov    %eax,0x4(%esp)
086805ac +0x42:  mov    -0x10(%ebp),%eax
086805af +0x45:  mov    %eax,(%esp)
086805b2 +0x48:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
086805b7 +0x4d:  mov    %eax,-0x18(%ebp)
086805ba +0x50:  mov    -0x18(%ebp),%eax
086805bd +0x53:  test   %eax,%eax
086805bf +0x55:  je     086805db <+0x71>
086805c1 +0x57:  mov    -0x18(%ebp),%eax
086805c4 +0x5a:  cmp    %eax,0x8(%ebp)
086805c7 +0x5d:  je     086805db <+0x71>
086805c9 +0x5f:  lea    -0x18(%ebp),%eax
086805cc +0x62:  mov    %eax,0x4(%esp)
086805d0 +0x66:  mov    0xc(%ebp),%eax
086805d3 +0x69:  mov    %eax,(%esp)
086805d6 +0x6c:  call   08551088 <_GLOBAL__I__ZN10CLuckPointC2Ev+0xdb>  ; global constructors keyed to CLuckPoint::CLuckPoint()+0xdb
086805db +0x71:  addl   $0x1,-0xc(%ebp)
086805df +0x75:  cmpl   $0x3,-0xc(%ebp)
086805e3 +0x79:  setle  %al
086805e6 +0x7c:  test   %al,%al
086805e8 +0x7e:  jne    086805a5 <+0x3b>
086805ea +0x80:  mov    -0x10(%ebp),%eax
086805ed +0x83:  leave
086805ee +0x84:  ret
```

## 反编译 C

```c
// CUser::GetUserListByParty @ 0x868056a

/* CUser::GetUserListByParty(std::vector<CUser*, std::allocator<CUser*> >&) */

CParty * __thiscall CUser::GetUserListByParty(CUser *this,vector *param_1)

{
  CUser *local_1c;
  CUser *local_18;
  CParty *local_14;
  int local_10;
  
  local_18 = this;
  std::vector<CUser*,std::allocator<CUser*>>::push_back
            ((vector<CUser*,std::allocator<CUser*>> *)param_1,&local_18);
  local_14 = (CParty *)GetParty(this);
  if (local_14 != (CParty *)0x0) {
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      local_1c = (CUser *)CParty::get_user(local_14,local_10);
      if ((local_1c != (CUser *)0x0) && (this != local_1c)) {
        std::vector<CUser*,std::allocator<CUser*>>::push_back
                  ((vector<CUser*,std::allocator<CUser*>> *)param_1,&local_1c);
      }
    }
  }
  return local_14;
}
```
