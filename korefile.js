let project = new Project('myhl', __dirname);

project.addFile('cpp/myhl/**');
project.addIncludeDir('cpp/myhl');

project.addFile('hl/MyHl.cpp');

resolve(project);
