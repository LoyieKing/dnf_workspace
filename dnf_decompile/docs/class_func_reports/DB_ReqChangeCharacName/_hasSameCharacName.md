# _hasSameCharacName

`_ZN22DB_ReqChangeCharacName18_hasSameCharacNameEP5MySQLPKcS3_`

`DB_ReqChangeCharacName::_hasSameCharacName(MySQL*, char const*, char const*)`

| 类 | 地址 |
|---|---|
| `DB_ReqChangeCharacName` | `0x084267c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084267c2  _ZN22DB_ReqChangeCharacName18_hasSameCharacNameEP5MySQLPKcS3_
#           DB_ReqChangeCharacName::_hasSameCharacName(MySQL*, char const*, char const*)
# range [0x084267c2, 0x0842688b]
084267c2 +0x00:  push   %ebp
084267c3 +0x01:  mov    %esp,%ebp
084267c5 +0x03:  sub    $0x28,%esp
084267c8 +0x06:  mov    0x14(%ebp),%eax
084267cb +0x09:  mov    %eax,0xc(%esp)
084267cf +0x0d:  mov    0x10(%ebp),%eax
084267d2 +0x10:  mov    %eax,0x8(%esp)
084267d6 +0x14:  movl   $"seLect delete_flag from %s.charac_info where charac_name='%s'",0x4(%esp)
084267de +0x1c:  mov    0xc(%ebp),%eax
084267e1 +0x1f:  mov    %eax,(%esp)
084267e4 +0x22:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084267e9 +0x27:  movl   $0x1,0x4(%esp)
084267f1 +0x2f:  mov    0xc(%ebp),%eax
084267f4 +0x32:  mov    %eax,(%esp)
084267f7 +0x35:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084267fc +0x3a:  xor    $0x1,%eax
084267ff +0x3d:  test   %al,%al
08426801 +0x3f:  je     0842680a <+0x48>
08426803 +0x41:  mov    $0x2,%eax
08426808 +0x46:  jmp    08426889 <+0xc7>
0842680a +0x48:  movl   $0x0,-0xc(%ebp)
08426811 +0x4f:  mov    0xc(%ebp),%eax
08426814 +0x52:  mov    %eax,(%esp)
08426817 +0x55:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0842681c +0x5a:  test   %eax,%eax
0842681e +0x5c:  setne  %al
08426821 +0x5f:  test   %al,%al
08426823 +0x61:  je     08426884 <+0xc2>
08426825 +0x63:  mov    0xc(%ebp),%eax
08426828 +0x66:  mov    %eax,(%esp)
0842682b +0x69:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08426830 +0x6e:  xor    $0x1,%eax
08426833 +0x71:  test   %al,%al
08426835 +0x73:  jne    08426858 <+0x96>
08426837 +0x75:  lea    -0xc(%ebp),%eax
0842683a +0x78:  mov    %eax,0x8(%esp)
0842683e +0x7c:  movl   $0x0,0x4(%esp)
08426846 +0x84:  mov    0xc(%ebp),%eax
08426849 +0x87:  mov    %eax,(%esp)
0842684c +0x8a:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08426851 +0x8f:  xor    $0x1,%eax
08426854 +0x92:  test   %al,%al
08426856 +0x94:  je     0842685f <+0x9d>
08426858 +0x96:  mov    $0x1,%eax
0842685d +0x9b:  jmp    08426864 <+0xa2>
0842685f +0x9d:  mov    $0x0,%eax
08426864 +0xa2:  test   %al,%al
08426866 +0xa4:  je     0842686f <+0xad>
08426868 +0xa6:  mov    $0x2,%eax
0842686d +0xab:  jmp    08426889 <+0xc7>
0842686f +0xad:  mov    -0xc(%ebp),%eax
08426872 +0xb0:  test   %eax,%eax
08426874 +0xb2:  je     0842687d <+0xbb>
08426876 +0xb4:  mov    $0x18,%eax
0842687b +0xb9:  jmp    08426882 <+0xc0>
0842687d +0xbb:  mov    $0x14,%eax
08426882 +0xc0:  jmp    08426889 <+0xc7>
08426884 +0xc2:  mov    $0x0,%eax
08426889 +0xc7:  leave
0842688a +0xc8:  ret
0842688b +0xc9:  nop
```

## 反编译 C

```c
// DB_ReqChangeCharacName::_hasSameCharacName @ 0x84267c2

/* DB_ReqChangeCharacName::_hasSameCharacName(MySQL*, char const*, char const*) */

undefined4 __thiscall
DB_ReqChangeCharacName::_hasSameCharacName
          (DB_ReqChangeCharacName *this,MySQL *param_1,char *param_2,char *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int local_10 [3];
  
  MySQL::set_query(param_1,"seLect delete_flag from %s.charac_info where charac_name=\'%s\'",param_2
                   ,param_3);
  cVar2 = MySQL::exec(param_1,true);
  if (cVar2 == '\x01') {
    local_10[0] = 0;
    iVar4 = MySQL::get_n_rows(param_1);
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      cVar2 = MySQL::fetch(param_1);
      if ((cVar2 == '\x01') && (cVar2 = MySQL::get_int(param_1,0,local_10), cVar2 == '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        uVar3 = 2;
      }
      else if (local_10[0] == 0) {
        uVar3 = 0x14;
      }
      else {
        uVar3 = 0x18;
      }
    }
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}
```
