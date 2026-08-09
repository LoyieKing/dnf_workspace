# src/ —— 主工程源码树

- 路径证据：`/data/secci/ci/jenkins/workspace/g3_release_suse32*/src/...`（三个 tag 同构）
- 工具链：GCC 4.1.0 SUSE，32 位 i586，-O2 级别，-DNDEBUG，-pthread
- 桩镜像：`../source/gunnersvr/src`、`../source/zergsvr/src`、`../source/secagent/src`
  （同一棵树在不同 tag 下编译，桩按二进制各存一份）
- 模块：commlib/{zenlib,framework}、commsvr/{gunnersvr,zergsvr}、
  formmog/secagent、protocol/{common,formmog}
