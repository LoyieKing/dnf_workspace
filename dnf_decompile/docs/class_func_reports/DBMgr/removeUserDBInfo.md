# removeUserDBInfo

`_ZN5DBMgr16removeUserDBInfoEi`

`DBMgr::removeUserDBInfo(int)`

| 类 | 地址 |
|---|---|
| `DBMgr` | `0x083f5038` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f5038  _ZN5DBMgr16removeUserDBInfoEi
#           DBMgr::removeUserDBInfo(int)
# range [0x083f5038, 0x083f506b]
083f5038 +0x00:  push   %ebp
083f5039 +0x01:  mov    %esp,%ebp
083f503b +0x03:  sub    $0x18,%esp
083f503e +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
083f5043 +0x0b:  mov    %eax,(%esp)
083f5046 +0x0e:  call   083f533c <_GLOBAL__I__ZN5MySQLC2Ev+0x3d>  ; global constructors keyed to MySQL::MySQL()+0x3d
083f504b +0x13:  xor    $0x1,%eax
083f504e +0x16:  test   %al,%al
083f5050 +0x18:  jne    083f5069 <+0x31>
083f5052 +0x1a:  mov    0x8(%ebp),%eax
083f5055 +0x1d:  lea    0xc(%eax),%edx
083f5058 +0x20:  lea    0xc(%ebp),%eax
083f505b +0x23:  mov    %eax,0x4(%esp)
083f505f +0x27:  mov    %edx,(%esp)
083f5062 +0x2a:  call   083f5d20 <_GLOBAL__I__ZN5MySQLC2Ev+0xa21>  ; global constructors keyed to MySQL::MySQL()+0xa21
083f5067 +0x2f:  jmp    083f506a <+0x32>
083f5069 +0x31:  nop
083f506a +0x32:  leave
083f506b +0x33:  ret
```

## 反编译 C

```c
// DBMgr::removeUserDBInfo @ 0x83f5038

/* DBMgr::removeUserDBInfo(int) */

void DBMgr::removeUserDBInfo(int param_1)

{
  char cVar1;
  
  cVar1 = isActiveGlobalDB(GlobalData::s_db_mgr);
  if (cVar1 == '\x01') {
    __gnu_cxx::
    hash_map<int,DBMgr::stUserDBInfo_t,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
    ::erase((hash_map<int,DBMgr::stUserDBInfo_t,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
             *)(param_1 + 0xc),(int *)&stack0x00000008);
  }
  return;
}
```
