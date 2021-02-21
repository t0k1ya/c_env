## C言語実行環境

### 起動方法
1. イメージをビルド
```
$ docker build -t ${tag_name} .
```
2. コンテナ起動＆コンテナ内にアクセス
```
$ docker run -itv ${host_project_root}:${container_WORKDIR} ${image_id} /bin/bash
```

