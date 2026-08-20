# loadDataPreliminaryTeamMatchList

`_ZN18online_preliminary22COnlinePreliminaryTeam32loadDataPreliminaryTeamMatchListEPc`

`online_preliminary::COnlinePreliminaryTeam::loadDataPreliminaryTeamMatchList(char*)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminaryTeam` | `0x0858831a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858831a  _ZN18online_preliminary22COnlinePreliminaryTeam32loadDataPreliminaryTeamMatchListEPc
#           online_preliminary::COnlinePreliminaryTeam::loadDataPreliminaryTeamMatchList(char*)
# range [0x0858831a, 0x08588373]
0858831a +0x00:  push   %ebp
0858831b +0x01:  mov    %esp,%ebp
0858831d +0x03:  sub    $0x28,%esp
08588320 +0x06:  mov    0xc(%ebp),%eax
08588323 +0x09:  mov    %eax,-0x10(%ebp)
08588326 +0x0c:  movl   $0x0,-0xc(%ebp)
0858832d +0x13:  jmp    0858835d <+0x43>
0858832f +0x15:  mov    -0xc(%ebp),%eax
08588332 +0x18:  shl    $0x3,%eax
08588335 +0x1b:  add    -0x10(%ebp),%eax
08588338 +0x1e:  lea    0x8(%eax),%edx
0858833b +0x21:  mov    0x8(%ebp),%eax
0858833e +0x24:  add    $0x24,%eax
08588341 +0x27:  mov    %edx,0x4(%esp)
08588345 +0x2b:  mov    %eax,(%esp)
08588348 +0x2e:  call   085891ea <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x4dd>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x4dd
0858834d +0x33:  mov    -0xc(%ebp),%ecx
08588350 +0x36:  mov    -0x10(%ebp),%edx
08588353 +0x39:  mov    0xc(%edx,%ecx,8),%edx
08588357 +0x3d:  mov    %edx,(%eax)
08588359 +0x3f:  addl   $0x1,-0xc(%ebp)
0858835d +0x43:  mov    -0x10(%ebp),%eax
08588360 +0x46:  mov    0x4(%eax),%eax
08588363 +0x49:  cmp    -0xc(%ebp),%eax
08588366 +0x4c:  setg   %al
08588369 +0x4f:  test   %al,%al
0858836b +0x51:  jne    0858832f <+0x15>
0858836d +0x53:  mov    $0x1,%eax
08588372 +0x58:  leave
08588373 +0x59:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminaryTeam::loadDataPreliminaryTeamMatchList @ 0x858831a

/* online_preliminary::COnlinePreliminaryTeam::loadDataPreliminaryTeamMatchList(char*) */

undefined4 __thiscall
online_preliminary::COnlinePreliminaryTeam::loadDataPreliminaryTeamMatchList
          (COnlinePreliminaryTeam *this,char *param_1)

{
  undefined4 *puVar1;
  int local_10;
  
  for (local_10 = 0; local_10 < *(int *)(param_1 + 4); local_10 = local_10 + 1) {
    puVar1 = (undefined4 *)
             std::
             map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
             ::operator[]((map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
                           *)(this + 0x24),(int *)(param_1 + local_10 * 8 + 8));
    *puVar1 = *(undefined4 *)(param_1 + local_10 * 8 + 0xc);
  }
  return 1;
}
```
